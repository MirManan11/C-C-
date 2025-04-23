#ifndef SNAKE_H
#define SNAKE_H

#include <vector>
#include <utility>

class Snake {
public:
    Snake(int initialLength);
    void move(char direction);
    void grow();
    bool checkCollision() const;
    const std::vector<std::pair<int, int>>& getBody() const;

private:
    std::vector<std::pair<int, int>> body; // Vector to store the segments of the snake
    char direction; // Current direction of the snake
};

#endif // SNAKE_H