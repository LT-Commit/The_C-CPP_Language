#include <iostream>
#include <Windows.h>

int main()
{
    const std::string WindowName = "Counter-Strike 2";
    RECT rec;

    HWND Windowmem = FindWindow(nullptr, WindowName.c_str()); 

    if(Windowmem) //  if hwnd is found
    {
        std::cout << "\nWindow CSGO is found\n";
    }
    else{
        std::cout << "\nCSGO Not found\n";
    }

    if(GetWindowRect(Windowmem,&rec))
    {
        std::cout << "Window position = L" << rec.left<< " T" << rec.top << "\n";
    }


    std::cout <<"Window address is: " << Windowmem;
    SetForegroundWindow(Windowmem); // Set window to front (Forground app)

    // This outputs if the window was found and the HWND

    // I want to make a thread for this
}