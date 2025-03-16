#pragma once
#include <Tlhelp32.h> // has our capture process list
#include <windows.h>

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
	}
};

// create snapshot of all windows
// auto find the right game with name &| class 
// get full modifying access to the game, read and write
// we need a getmodulebase address function win api has it we good

// readprocessmemory
// write process memory

// so lets do that list
