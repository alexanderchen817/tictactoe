#pragma once

#include <iostream>
#include <vector>

using std::vector;

class Board
{
public:
    Board();
    ~Board();
    void welcomeMessage();
    bool checkWin();
    void displayBoard();
private:
    vector<vector<int>> board;
    unsigned int board_size;
};