#include <string>
#include <sstream>

class eightPuzzle {
    private:
        char puzzle[3][3];
        char goal[3][3];
    public:
        eightPuzzle (std::string initState, std::string goalState);
        void getState();
        void goalState();
        int getBlankX();
        int getBlankY();
        bool moveBlank(std::string direction);
        bool isSolved();
};
