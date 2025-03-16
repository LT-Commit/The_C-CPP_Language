#include "utilities\memory.h"
#include "utilities\Offsets.h"
#include <iostream>
#include <vector>


// MENU COLORS

const std::string red = "\033[31m";
const std::string green = "\033[32m";
const std::string yellow = "\033[33m";
const std::string blue = "\033[34m";
const std::string magenta = "\033[35m";
const std::string cyan = "\033[36m";
const std::string white = "\033[37m";
const std::string reset = "\033[0m";

// LOGO
std::vector<std::string> logo
{
	"  ___                              _       ",
	" / _ \\                            | |      ",
	"/ /_\\ \\_ __   ___  _ __ ___   ___ | |_   _ ",
	"|  _  | '_ \\ / _ \\| '_ ` _ \\ / _ \\| | | | |",
	"| | | | | | | (_) | | | | | | (_) | | |_| |",
	"\\_| |_/_| |_|\\___/|_| |_| |_|\\___/|_|\\__, |",
	"                                      __/ |",
	"                                     |___/ "
};

// I want to modify health , ammo, armor, grenades 

int main()
{
	Memory memory{ "ac_client.exe"} ; // Using the mem constructor for a snapshot of the process on our computer if we have the process open  and takes the proceess ID jsut doing it yk

	const auto ModuleBaseAddress = memory.GetModuleAddress("ac_client.exe"); // getting the "ac client module address" we can now just add the thing

	const auto LocalPlayerAddress = memory.Read<std::uintptr_t>(ModuleBaseAddress + localPlayer); // DEREFERENCE POINTER -> Local player Address (address)

	const auto HealthAddress = LocalPlayerAddress + Health;
	const auto ArmorAddress = LocalPlayerAddress + Armor;
	const auto ARammoAddress = LocalPlayerAddress + ARammo;


		memory.Write<int>(HealthAddress, 9999); //TYpecaset to int because its a 4 bytes of health
		memory.Write<int>(ArmorAddress, 9999);
		memory.Write<int>(ARammoAddress, 9999);
		
		// AYY all this works 
	

	std::cout << std::endl;
	
	for (const auto& line : logo)
	{
		std::cout << yellow << line << std::endl;
	}





}