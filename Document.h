/*!
 * @file document.h
 * @author iTuMaN4iK (swaga.ituman4ik@gmail.com)
 * @brief Class Document.
 * @version 0.1
 * @date 2019-12-08
 *
 * @copyright Copyright (c) 2019
 *
 */

#pragma once
#include "Shape/Rectangle.h"
#include <string>
#include <vector>

class Document {
private:
  std::vector<Shape *> shapes;
  void draw();
  bool bSave;

public:
  Document();

  void addNewShape(Shape *);
  void deleteShape(unsigned int id);
  void newDoc();
  void open();
  void save();
  ~Document();
};