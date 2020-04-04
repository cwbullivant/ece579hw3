#include "agent.h"
#include <iostream>


agent::agent (std::string inputHeuristic, std::string initState, std::string goalState) {
    heuristic = inputHeuristic;
    ist = initState;
    gst = goalState;
}


void agent::solve() {

    eightPuzzle problem(ist,gst);

    std::cout << "Initial state is \n";
    problem.printState();
    std::cout << "Goal state is \n";
    problem.goalState();


}

void agent::calculateFscore() {

}
