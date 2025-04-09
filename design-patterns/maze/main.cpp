#include <iostream>

#include "maze.h"

int main() {
  std::cout << "Maze" << std::endl;

  MazeGame myMazeGame;

  myMazeGame.CreateMaze();

  return 0;
}
