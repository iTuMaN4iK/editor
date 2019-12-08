/*!
 * @file Shape.cpp
 * @author iTuMaN4iK (swaga.ituman4ik@gmail.com)
 * @brief Реализация класса примитива фигуры
 * @version 0.1
 * @date 2019-12-08
 *
 * @copyright Copyright (c) 2019
 *
 */

#include "Shape.h"
std::set<unsigned int> Shape::pool_ids = {};

Shape::Shape(unsigned int x, unsigned int y) : x{x}, y{y} { id = prepareID(); }

unsigned int Shape::prepareID() {
  if (pool_ids.empty()) {
    pool_ids.insert(0);
    return 0;
  } else {
    unsigned int findID = 0;
    for (auto &id : pool_ids) {
      if (id > findID + 1) {
        pool_ids.insert(findID + 1);
        return findID + 1;
      } else {
        findID = id;
      }
    }
    pool_ids.insert(++findID);
    return findID;
  }
}

unsigned int Shape::getX() { return x; }
unsigned int Shape::getY() { return y; }
unsigned int Shape::getID() { return id; }

Shape::~Shape() { Shape::pool_ids.erase(id); }
