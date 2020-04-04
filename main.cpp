#include <iostream>
#include "agent.h"

int main() {
    std::string initState;
    std::string goalState;

    std::cout << "Enter the initial state: " << std::endl;
    std::cin >> initState;
    std::cout << "Enter the goal state: " << std::endl;
    std::cin >> goalState;

    agent aStar("misplaced", initState, goalState);

    aStar.solve();

}
