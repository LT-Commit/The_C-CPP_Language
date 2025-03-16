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

// Get the users username from game, We got the offset for the username before so its easy;

class NamePadding
{
public:
	char preNamePadding[29]; //0x0208
	char maxCharecterInName[16]; //0x0225
	char postNamePadding[3641]; //0x0235
};


// I want to modify health , ammo, armor, grenades 

int main()
{
	Memory memory{ "ac_client.exe"} ; // Using the mem constructor for a snapshot of the process on our computer if we have the process open  and takes the proceess ID jsut doing it yk

	//			Get the addresses

	const auto ModuleBaseAddress = memory.GetModuleAddress("ac_client.exe"); // getting the "ac client module address" we can now just add the thing
	const auto LocalPlayerAddress = memory.Read<std::uintptr_t>(ModuleBaseAddress + localPlayer); // DEREFERENCE POINTER -> Local player Address (address)
	const auto HealthAddress = LocalPlayerAddress + Health;
	const auto ArmorAddress = LocalPlayerAddress + Armor;
	const auto ARammoAddress = LocalPlayerAddress + ARammo;
	const auto GrenadeAddress = LocalPlayerAddress + Grenades;
	const auto nameAddress = LocalPlayerAddress + nameOffsetWithinPadding;

	std::string name = memory.Read<NamePadding>(nameAddress).preNamePadding; // Read the name char array for the whole username used in ac


	std::cout << std::endl; // New line from the logo
	for (const auto& line : logo)
	{
		std::cout << yellow << line << std::endl;
	}
	std::cout << white << "_________________________________________________" << yellow<< std::endl;

	std::cout << "Welcome to Anomoly, " << magenta << name << yellow << std::endl;

	std::cout << "\nF1: Health Hack " << std::endl;
	std::cout << "F2: Armor Hack " << std::endl;
	std::cout << "F3: Grenade Hack " << std::endl;
	std::cout << "F4: Ammo Hack " << std::endl;



	//			Main while loop

	while (true)
	{
		if (GetAsyncKeyState(VK_F1) & 0x8000) //Is f1 being held down? is it being held down?
		{
			memory.Write<int>(HealthAddress, 9999); //TYpecaset to int because its a 4 bytes of health
		}
		else if (GetAsyncKeyState(VK_F2) & 0x8000)
		{
			memory.Write<int>(ArmorAddress, 9999);
		}
		else if (GetAsyncKeyState(VK_F3) & 0x8000)
		{
			memory.Write<int>(GrenadeAddress, 9999);
		}
		else if (GetAsyncKeyState(VK_F3) & 0x8000)
		{
			memory.Write<int>(ARammoAddress, 9999);
		}
	}
}