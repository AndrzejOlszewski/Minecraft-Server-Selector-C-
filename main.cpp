
/*
 * Project: Minecraft Server Selector
 * Author: Andrzej Olszewski
 * Description: A simple C++ console application that takes user input 
 *              to choose a Minecraft server using if/else logic.
 */


#include <iostream>

int main() { 

    // Variable store the users choice
    int Choice = 0;

    std::cout << "___MINECRAFT SERVER SELECTOR ----\n";
    std::cout << "1. CubeCraft\n";
    std::cout << "2. The Hive\n";
    std::cout << "Enter the number of the server you want to join: "; 

    // character input
    std::cin >> Choice;

    if (Choice == 1) {
        std::cout << "Connecting to CubeCraft\n";
    } // FIXED: Added this closing bracket to finish the first 'if'
    else if (Choice == 2)
    {
        std::cout << "Connecting to the Hive...\n";
    }
    else
    {
        std::cout << "Invalid choice\n";
    }
    
    return 0; // Good practice to end main() with this

} // FIXED: Added this closing bracket to finish the main function