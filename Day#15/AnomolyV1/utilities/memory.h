#pragma once
#include <windows.h> // ALWAYS DEFINE WINDOWS.H FIRST OVER TLHELP32
#include <tlhelp32.h> // has our capture process list



#include <cstdint>
#include <string_view>

class Memory
{
private:
	std::uintptr_t processId = NULL; // untptr_t is a DWORD what supports both 32 and 64 bit games and since we wanna make it universal we do it like that
	void* processHandel = nullptr; // We want to store a handel which is also known as a void* so we make a variable for it to be stored in and set it as nullptr aka 0

public:
	// constuctions and functions go here
	Memory(const std::string_view processName) noexcept // NO EXEPTIONS WILL optimise the code and make it faster, we are also passing in a const string view called processName
	{

		::PROCESSENTRY32 entry = { }; // used to store data about a process while enumirating
		entry.dwSize = sizeof(::PROCESSENTRY32); // WINAPI what says set entry.dwSize as the size of processsentry32, without this u might expirence crashes/bugs

		const auto processSnapshot = ::CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0); // SNAP ALL THE PROCESSES AND SAVE IN PROCESS SNAPSHOT

		// compare if process name the same as the process in the list if so get process ID. If not do next ect ect

		while (::Process32Next(processSnapshot, &entry)) // While there are processes
		{
			if (!processName.compare(entry.szExeFile)) // If process name compared to exe file is TRUE
			{
				processId = entry.th32ProcessID; // NOW WE HAVE PROCESS ID
				processHandel = ::OpenProcess(PROCESS_ALL_ACCESS, FALSE, processId); // Provide read and write, THIS ALSO MAKES IT DETECTABLE , devs know about winapi and detect all access
				break;
			}
		}
		// CLOSE THE HANDEL HERE TO AVOID MEMORY LEAK
		if (processSnapshot)
			::CloseHandle(processSnapshot);
	}
	~Memory() // This is a deconstructor
	{
		if (processHandel)
		{
			::CloseHandle(processHandel);
		}
	}


	const std::uintptr_t GetModuleAddress(const std::string_view moduleName) const noexcept
	{
		::MODULEENTRY32 entry = { };
		entry.dwSize = sizeof(::MODULEENTRY32);

		const auto processSnapeshot = ::CreateToolhelp32Snapshot(TH32CS_SNAPMODULE | TH32CS_SNAPMODULE32, processId);

		std::uintptr_t moduleBaseAddress = 0;

		while (::Module32Next(processSnapeshot, &entry))
		{
			if (!moduleName.compare(entry.szModule))
			{
				moduleBaseAddress = reinterpret_cast<std::uintptr_t>(entry.modBaseAddr); //typecaset
				break;
			}

			
		}
		if (processSnapeshot)
			::CloseHandle(processSnapeshot);

		return moduleBaseAddress; // Returning prefered image base / getmodbase address
	}


	template <typename T> // allows to read any data type
	constexpr const T Read(const std::uintptr_t& address) const noexcept // constant reference to the address memory return type of read is T so any data type
	{
		T value = { };
		::ReadProcessMemory(processHandel, reinterpret_cast<const void*>(address), &value, sizeof(T), NULL);
		return value; // retriving the write value
	}

	template <typename T>
	constexpr void Write(const std::uintptr_t& address, const T& value) const noexcept // Void since we writing to it dont need to trurn CONST REF TO WHAT WE WANNA WRITE TOO
	{
		::WriteProcessMemory(processHandel, reinterpret_cast<void*>(address), &value, sizeof(T), NULL); // Giving a address to cast void pointer
	}

	// THAT IS OUT FINISHED MEMORY 

	// just quickly if i ever wanted to bypass an AC (some ac's anyway) i said before that writeprocess memory is detected so we would need to write my own WriteProcessMemory
};
