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
/*!
 * @brief Класс редактора
 *
 */
class Editor {
public:
  /*!
   * @brief Реализация паттерна одиночки
   *
   * @return Editor&
   */
  static Editor &init();
  /*!
   * @brief Конструктор копирования удален
   *
   * @param editor
   */
  Editor(const Editor &editor) = delete;
  /*!
   * @brief Оператор присваивания удален
   *
   * @param editor
   * @return Editor&
   */
  Editor &operator=(const Editor &editor) = delete;
  /*!
   * @brief Запуск работы
   *
   */
  void run();

private:
  Document doc; //!< Документ
  /*!
   * @brief Конструктор
   *
   */
  Editor();
  /*!
   * @brief Создает новый документ
   *
   */
  void createNewDocument();
  /*!
   * @brief Импортирует документ
   *
   */
  void importDoc();
  /*!
   * @brief Экспортирует документ
   *
   */
  void exportDoc();
  /*!
   * @brief Добавляет в документ
   *
   */
  void addShape();
  /*!
   * @brief Удаляет фигуру
   *
   * @param id Идентификатор фигуры
   */
  void deleteShape(unsigned id);
};
