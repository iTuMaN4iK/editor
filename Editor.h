/*!
 * @file Editor.h
 * @author iTuMaN4iK (swaga.ituman4ik@gmail.com)
 * @brief Класс редактора
 * @version 0.1
 * @date 2019-12-08
 *
 * @copyright Copyright (c) 2019
 *
 */
#include "Document.h"
class Editor {
public:
  static Editor &init();
  Editor(const Editor &editor) = delete;
  Editor &operator=(const Editor &editor) = delete;
  void run();

private:
  Document doc;
  Editor();
  void createNewDocument();
  void importDoc();
  void exportDoc();
  void addRectange();
  void deleteShape(unsigned id);
};
