/*!
 * @file Editor.cpp
 * @author iTuMaN4iK (swaga.ituman4ik@gmail.com)
 * @brief Класс редактора реализация
 * @version 0.1
 * @date 2019-12-08
 *
 * @copyright Copyright (c) 2019
 *
 */

#include "Editor.h"

Editor &Editor::init() {
  static Editor editor;
  return editor;
}
Editor::Editor() {}
void Editor::createNewDocument() { doc.newDoc(); }
void Editor::importDoc() { doc.open(); }
void Editor::exportDoc() { doc.save(); }
void Editor::addShape() { doc.addNewShape(new Rectangle{1, 1, 2, 2}); }
void Editor::deleteShape(unsigned id) { doc.deleteShape(id); }
void Editor::run() { doc.newDoc(); }
