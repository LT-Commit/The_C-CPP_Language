#include <iostream>
#include <Windows.h>

int main()
{
    const std::string WindowName = "Counter-Strike 2"; // Defining the window name this time as counterstrike
    RECT rec;

    HWND Windowmem = FindWindow(nullptr, WindowName.c_str());  // Set Window mem as the find window address which return a HWND from no class and Windowname

    if(Windowmem) //  if hwnd is found
    {
        std::cout << "\nWindow CSGO is found\n";
    }
    else{
        std::cout << "\nCSGO Not found\n";
    }

    if(GetWindowRect(Windowmem,&rec)) // If window memory is try along with a argu,ment with an adress valid of RECT
    {
        std::cout << "Window position = L" << rec.left<< " T" << rec.top << "\n"; // Print the position of the window left and top
    }


    std::cout <<"Window address is: " << Windowmem; // Print window address to terminal 
    SetForegroundWindow(Windowmem); // Set window to front (Forground app)

    // This outputs if the window was found and the HWND

    // I want to make a thread for this
}