#include <iostream>
#include <string>
#include <list>
#include "eightPuzzle.h"

class agent {
    private:
        void calculateFscore();
        std::list<int**> closedList;
        std::list<int**> openList;
        std::string heuristic;
        std::string ist;
        std::string gst;
    public:
        agent (std::string inputHeuristic, std::string initstate, std::string goalState);
        void solve();
};
