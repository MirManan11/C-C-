#ifndef BOARD_H
#define BOARD_H

class Board {
public:
    Board(int width, int height);
    void draw();
    void placeFood();
    bool checkBoundaries(int x, int y);

private:
    int width;
    int height;
    int foodX;
    int foodY;
};

#endif // BOARD_H