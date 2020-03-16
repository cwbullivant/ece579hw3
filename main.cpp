#include <iostream>
#include <string>
#include "eightPuzzle.h"

int main() {
    std::string initState;
    std::string goalState;

    std::cout << "Enter the initial state: " << std::endl;
    std::cin >> initState;
    std::cout << "Enter the goal state: " << std::endl;
    std::cin >> goalState;

    eightPuzzle puzzle(initState, goalState);

    std::cout << "Initial state is \n";
    puzzle.getState();

    std::cout << "Goal state is \n";
    puzzle.goalState();

    if (puzzle.isSolved()) {
        std::cout << "Puzzle is solved." << std::endl;
    } else {
        std::cout << "Puzzle is not solved." << std::endl;
    }

}
