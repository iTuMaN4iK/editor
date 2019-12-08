/**
 * @file main.cpp
 * @author iTuMaN4iK (swaga.ituman4ik@gmail.com)
 * @brief
 * @version 0.1
 * @date 2019-11-18
 *
 * @copyright Copyright (c) 2019
 *
 */
#include "Editor.h"
#include <iostream>
int main() {
  Editor &editor = Editor::init();
  editor.run();
  return 0;
}