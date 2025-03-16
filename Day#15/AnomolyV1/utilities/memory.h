#pragma once
#include <Tlhelp32.h> // has our capture process list
#include <windows.h>

#include <cstdint>

class Memory
{
private:
	std::uintptr_t processId = NULL; // untptr_t is a DWORD what supports both 32 and 64 bit games and since we wanna make it universal we do it like that
	void* processHandel = nullptr; // We want to store a handel which is also known as a void* so we make a variable for it to be stored in and set it as nullptr aka 0
};

// create snapshot of all windows
// auto find the right game with name &| class 
// get full modifying access to the game, read and write
// we need a getmodulebase address function win api has it we good

// readprocessmemory
// write process memory

// so lets do that list
