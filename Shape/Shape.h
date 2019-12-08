/*!
 * @file Shape.h
 * @author iTuMaN4iK (swaga.ituman4ik@gmail.com)
 * @brief Примитив фигуры
 * @version 0.1
 * @date 2019-12-08
 *
 * @copyright Copyright (c) 2019
 *
 */
#pragma once
#include <iostream>
#include <set>
// using namespace std;

class Shape {
private:
  unsigned int x;
  unsigned int y;
  unsigned int id;
  unsigned int prepareID();

  static std::set<unsigned int> pool_ids;

public:
  Shape(unsigned int x, unsigned int y);
  unsigned int getX();
  unsigned int getY();
  unsigned int getID();

  virtual void draw() = 0;
  virtual ~Shape();
};