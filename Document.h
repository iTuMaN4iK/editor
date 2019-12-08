/*!
 * @file document.h
 * @author iTuMaN4iK (swaga.ituman4ik@gmail.com)
 * @brief Класс управления документом
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
/*!
 * @brief Класс управления документом
 *
 */
class Document {
private:
  std::vector<Shape *> shapes; //!< Фигуры в документе
  void draw();                 //!< Отобразить фигуры
  bool bSave; //!< Переменная состояния сохранения

public:
  /*!
   * @brief Конструктор
   *
   */
  Document();
  /*!
   * @brief Добавить новую фигуру в документ
   *
   */
  void addNewShape(Shape *);
  /*!
   * @brief Удаляет фигуру
   *
   * @param id Идентификатор фигуры
   */
  void deleteShape(unsigned int id);
  /*!
   * @brief Создать новый документ
   *
   */
  void newDoc();
  /*!
   * @brief Открыть документ
   *
   */
  void open();
  /*!
   * @brief Сохранить документ
   *
   */
  void save();
  /*!
   * @brief Деструктор
   *
   */
  ~Document();
};