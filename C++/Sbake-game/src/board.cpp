#include "board.h"
#include <iostream>

Board::Board(int width, int height) : width(width), height(height) {
    // Initialize the game board
    board = new char*[height];
    for (int i = 0; i < height; ++i) {
        board[i] = new char[width];
        std::fill(board[i], board[i] + width, ' ');
    }
}

Board::~Board() {
    // Clean up the board
    for (int i = 0; i < height; ++i) {
        delete[] board[i];
    }
    delete[] board;
}

void Board::draw() {
    // Draw the game board
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            std::cout << board[i][j];
        }
        std::cout << std::endl;
    }
}

void Board::placeFood(int x, int y) {
    // Place food on the board
    if (x >= 0 && x < width && y >= 0 && y < height) {
        board[y][x] = '*'; // Assuming '*' represents food
    }
}

bool Board::checkBoundaries(int x, int y) {
    // Check if the given coordinates are within the game boundaries
    return (x >= 0 && x < width && y >= 0 && y < height);
}