/*!
 * @file Rectangle.cpp
 * @author iTuMaN4iK (swaga.ituman4ik@gmail.com)
 * @brief
 * @version 0.1
 * @date 2019-12-08
 *
 * @copyright Copyright (c) 2019
 *
 */

#include "Rectangle.h"

Rectangle::Rectangle(unsigned int x, unsigned int y, unsigned int height,
                     unsigned int width)
    : Shape(x, y), height(height), width(width) {
  draw();
}
void Rectangle::draw() {
  std::cout << "[Rectangle::draw()] x=" << getX() << " y= " << getY()
            << " height= " << height << " width= " << width
            << " id= " << getID() << std::endl;
}
Rectangle::~Rectangle() {
  std::cout << "[~Rectangle] destruct id = " << getID() << std::endl;
}
