#ifndef PLAYER1_H
#define PLAYER1_H

#include <string>

class Player1{

    private:
    std:: string name;
    int x_move;
    int y_move;
    int score;

    public:
    Player1(std::string);
    void setScore();
    void setMove(int, int);
    std::string getName();
    int getScore();


};

#endif