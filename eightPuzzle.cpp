#include "eightPuzzle.h"
#include <iostream>

eightPuzzle::eightPuzzle (std::string initState, std::string goalState) {
    std::stringstream inState(initState);
    std::stringstream goState(goalState);
    char initVal;
    char goalVal;

    for (int i = 0; i < 3; i++) {
        int j = 0;
        while (j < 3) {
            inState >> initVal;
            goState >> goalVal;
            if (initVal != ',') {
                puzzle[i][j] = initVal;
                goal[i][j] = goalVal;
                j++;
            }
        }
    }
}

void eightPuzzle::getState() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << puzzle[i][j];
            if (j != 2)
                std::cout << " ";
        }
        std::cout << std::endl;
    }
}

void eightPuzzle::goalState() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << goal[i][j];
            if (j != 2)
                std::cout << " ";
        }
        std::cout << std::endl;
    }
}

int eightPuzzle::getBlankX() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (puzzle[i][j] == '_') {
                return j;
            }
        }
    }
}

int eightPuzzle::getBlankY() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (puzzle[i][j] == '_') {
                return i;
            }
        }
    }
}


bool eightPuzzle::moveBlank(std::string direction) {
    int i,j;
    
    i = eightPuzzle::getBlankY();
    j = eightPuzzle::getBlankX();

    if (direction == "left") {
        if (j == 0) {
            std::cout << "Unable to place piece there" << std::endl;
            return false;
        }
        int tmp = puzzle[i][j-1];
        puzzle[i][j-1] = puzzle[i][j];
        puzzle[i][j] = tmp;
        return true;
    } else if (direction == "right") {
        if (j == 2) {
            std::cout << "Unable to place piece there" << std::endl;
            return false;
        }
        int tmp = puzzle[i][j+1];
        puzzle[i][j+1] = puzzle[i][j];
        puzzle[i][j] = tmp;
        return true;
    } else if (direction == "up") {
        if (i == 0) {
            std::cout << "Unable to place piece there" << std::endl;
            return false;
        }
        int tmp = puzzle[i-1][j];
        puzzle[i-1][j] = puzzle[i][j];
        puzzle[i][j] = tmp;
        return true;
    } else if (direction == "down") {
        if (i == 2) {
            std::cout << "Unable to place piece there" << std::endl;
            return false;
        }
        int tmp = puzzle[i+1][j];
        puzzle[i+1][j] = puzzle[i][j];
        puzzle[i][j] = tmp;
        return true;
    } else {
        std::cout << "Direction input is not recognized." << std::endl;
        return false;
    }
}

bool eightPuzzle::isSolved() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (puzzle[i][j] != goal[i][j])
                return false;
        }
    }
    return true;
}
