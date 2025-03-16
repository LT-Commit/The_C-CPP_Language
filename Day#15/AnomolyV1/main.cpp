#include "utilities\memory.h"
#include "utilities\Offsets.h"

// I want to modify health , ammo, armor, grenades 

int main()
{
	Memory memory{ "ac_client.exe"} ; // Using the mem constructor for a snapshot of the process on our computer if we have the process open  and takes the proceess ID jsut doing it yk

	const auto ModuleBaseAddress = memory.GetModuleAddress("ac_client.exe"); // getting the "ac client module address" we can now just add the thing

	const auto LocalPlayerAddress = memory.Read<std::uintptr_t>(ModuleBaseAddress + localPlayer); // DEREFERENCE POINTER -> Local player Address (address)

	const auto HealthAddress = LocalPlayerAddress + Health;

	while (true)
	{
		memory.Write<int>(HealthAddress, 9999); //TYpecaset to int because its a 4 bytes of health
	}





}