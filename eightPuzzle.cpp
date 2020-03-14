#include "eightPuzzle.h"
#include <iostream>

eightPuzzle::eightPuzzle (std::string initState) {
    std::stringstream inState(initState);
    char val;

    for (int i = 0; i < 3; i++) {
        int j = 0;
        while (j < 3) {
            inState >> val;
            if (val != ',') {
                //std::cout << val << std::endl;
                puzzle[i][j] = val;
                j++;
            }
        }
    }
    eightPuzzle::getState();
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
    }

}
