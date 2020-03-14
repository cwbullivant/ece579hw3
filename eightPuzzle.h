#include <string>
#include <sstream>

class eightPuzzle {
    private:
        char puzzle[3][3];
    public:
        eightPuzzle (std::string initState);
        void getState();
        int getBlankX();
        int getBlankY();
        bool moveBlank(std::string direction);
};
