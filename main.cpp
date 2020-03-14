#include <iostream>
#include <string>
#include "eightPuzzle.h"

int main() {
    std::string initState;
    std::string goalState;

    std::cout << "Enter the initial state: " << std::endl;
    std::cin >> initState;

    std::cout << "Initial state is \n";

    eightPuzzle puzzle(initState);

    puzzle.moveBlank("left");
    std::cout << "Moved state is \n";
    puzzle.getState();

}
