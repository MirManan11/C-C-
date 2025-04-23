project(snake-game)

cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 11)

add_executable(snake-game
    src/main.cpp
    src/game.cpp
    src/snake.cpp
    src/board.cpp
)

include_directories(src)