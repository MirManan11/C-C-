// filepath: snake-game/src/snake.cpp

#include "snake.h"

Snake::Snake() {
    // Initialize the snake with a starting length and position
    length = 1;
    position.push_back({0, 0}); // Starting position at the top-left corner
}

void Snake::move(Direction dir) {
    // Calculate new head position based on direction
    Position newHead = position.front();
    switch (dir) {
        case UP: newHead.y--; break;
        case DOWN: newHead.y++; break;
        case LEFT: newHead.x--; break;
        case RIGHT: newHead.x++; break;
    }
    
    // Add new head position to the front of the snake
    position.insert(position.begin(), newHead);
    
    // Remove the tail if the snake hasn't grown
    if (position.size() > length) {
        position.pop_back();
    }
}

void Snake::grow() {
    // Increase the length of the snake
    length++;
}

bool Snake::checkCollision() {
    // Check if the snake collides with itself or the boundaries
    Position head = position.front();
    
    // Check collision with itself
    for (size_t i = 1; i < position.size(); i++) {
        if (position[i] == head) {
            return true; // Collision detected
        }
    }
    
    // Check collision with boundaries (assuming a board size of 20x20)
    if (head.x < 0 || head.x >= 20 || head.y < 0 || head.y >= 20) {
        return true; // Collision with boundary detected
    }
    
    return false; // No collision
}

std::vector<Position> Snake::getPosition() const {
    return position; // Return the current positions of the snake segments
}