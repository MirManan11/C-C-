#include <iostream>
#include "game.h"

int main() {
    Game game;
    game.start();

    while (game.isRunning()) {
        game.update();
        // Handle user input here (not implemented in this snippet)
    }

    game.end();
    return 0;
}