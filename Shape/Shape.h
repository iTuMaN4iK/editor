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

class Shape {
private:
  unsigned int x; //!< Координата начальной точки по оси X
  unsigned int y; //!< Координата начальной точки по оси Y
  unsigned int id; //!< Идентификатор
  /*!
   * @brief Получить незанятый идентификатор
   *
   * @return unsigned int
   */
  unsigned int prepareID();

  static std::set<unsigned int> pool_ids; //!< Идентификаторы

public:
  /*!
   * @brief Конструктор
   *
   * @param x Координата начальной точки по оси X
   * @param y Координата начальной точки по оси Y
   */
  Shape(unsigned int x, unsigned int y);
  /*!
   * @brief Вернуть координату по оси X
   *
   * @return unsigned int
   */
  unsigned int getX();
  /*!
   * @brief Вернуть координату по оси Y
   *
   * @return unsigned int
   */
  unsigned int getY();
  /*!
   * @brief Вернуть идентификатор
   *
   * @return unsigned int
   */
  unsigned int getID();
  /*!
   * @brief Отобразить фигуру
   *
   */
  virtual void draw() = 0;
  /*!
   * @brief Деструктор
   *
   */
  virtual ~Shape();
};