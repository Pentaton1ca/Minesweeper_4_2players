#ifndef GAME_H
#define GAME_H
#include <string>

class Game{
    private:
    bool game[9][9];
    char grid[9][9];
    
    protected:
    std:: string current_player_name;

    public:
    char (*grid_ptr)[9][9];
    bool (*game_ptr)[9][9];
    
    void fillGrid();
    void placeMines();
    int calcNear();
    void revealEmptyCells();
    void setName();
    void setMove(int, int);
    int getGame(int, int);
    int getGrid();


};

#endif