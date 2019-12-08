/*!
 * @file Rectangle.h
 * @author iTuMaN4iK (swaga.ituman4ik@gmail.com)
 * @brief Дочерний класс прямоугольных примитив.
 * @version 0.1
 * @date 2019-12-08
 *
 * @copyright Copyright (c) 2019
 *
 */
#pragma once
#include "Shape.h"
class Rectangle : public Shape {
private:
  unsigned int height;
  unsigned int width;
public:
  Rectangle(unsigned int x, unsigned int y, unsigned int height,
            unsigned int width);
  void draw();
  ~Rectangle();
};