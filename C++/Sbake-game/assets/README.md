# Snake Game

This is a simple implementation of the classic Snake game using C++. The game allows players to control a snake that grows in length as it consumes food while avoiding collisions with itself and the game boundaries.

## Project Structure

```
snake-game
├── src
│   ├── main.cpp        # Entry point of the game
│   ├── game.cpp        # Implementation of the Game class
│   ├── game.h          # Header file for the Game class
│   ├── snake.cpp       # Implementation of the Snake class
│   ├── snake.h         # Header file for the Snake class
│   ├── board.cpp       # Implementation of the Board class
│   └── board.h         # Header file for the Board class
├── assets
│   └── README.md       # Information about game assets
├── CMakeLists.txt      # CMake configuration file
└── README.md           # Project documentation
```

## Building the Project

To build the project, you need to have CMake installed. Follow these steps:

1. Clone the repository or download the project files.
2. Open a terminal and navigate to the project directory.
3. Create a build directory:
   ```
   mkdir build
   cd build
   ```
4. Run CMake to configure the project:
   ```
   cmake ..
   ```
5. Build the project:
   ```
   cmake --build .
   ```

## Running the Game

After building the project, you can run the game executable generated in the build directory. Enjoy playing the Snake game!

## Assets

For information about the assets used in the game, please refer to the `assets/README.md` file.