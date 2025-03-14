#include <iostream>
#include <Windows.h>

int main()
{
    const std::string WindowName = "Counter-Strike 2";

    HWND Windowmem = FindWindow(nullptr, WindowName.c_str()); 

    if(Windowmem)
    {
        std::cout << "\nWindow CSGO is found\n";
    }
    else{
        std::cout << "\nCSGO Not found\n";
    }

    std::cout <<"Window address is: " << Windowmem;

    // This outputs if the window was found and the HWND
}