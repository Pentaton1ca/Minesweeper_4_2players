#include "Game.h"
#include <string>

void Game:: fillGrid(){
    for (int i = 0; i <= 10; i++){
        for (int j = 0; j <= 10; j++){
            grid_ptr = &this->grid;
            grid_ptr[i][j] = "□";
        }
    }
};
    void placeMines();
    int calcNear();
    void revealEmptyCells();
    void setName();
    void setMove(int, int);
    int getGame(int, int);
    int getGrid();