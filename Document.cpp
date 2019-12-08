/*!
 * @file Document.cpp
 * @author iTuMaN4iK (swaga.ituman4ik@gmail.com)
 * @brief
 * @version 0.1
 * @date 2019-12-08
 *
 * @copyright Copyright (c) 2019
 *
 */
#include "Document.h"
Document::Document() : bSave(false) {
  std::cout << "Create new document " << std::endl;
}

void Document::addNewShape(Shape *s) {
  shapes.emplace_back(s);
  draw();
  bSave = true;
}
void Document::deleteShape(unsigned int id) {
  for (auto it = shapes.begin(); it != shapes.end(); ++it) {
    if ((*it)->getID() == id) {
      delete *it;
      shapes.erase(it);
      draw();
      bSave = true;
      return;
    }
  }
}
void Document::newDoc() {
  for (auto &shape : shapes)
    delete shape;
  shapes.clear();
}

void Document::draw() {
  for (auto &shape : shapes) {
    shape->draw();
  }
}
void Document::open() {
  if (bSave)
    save();
  newDoc();
  std::cout << "open" << std::endl;
  draw();
}
void Document::save() {
  if (!bSave) {
    return;
  }
  std::cout << "save" << std::endl;
  bSave = false;
}
Document::~Document() { newDoc(); }
