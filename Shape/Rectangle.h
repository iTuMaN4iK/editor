/*!
 * @file Rectangle.h
 * @author iTuMaN4iK (swaga.ituman4ik@gmail.com)
 * @brief Дочерний класс прямоугольных примитив
 * @version 0.1
 * @date 2019-12-08
 *
 * @copyright Copyright (c) 2019
 *
 */
#pragma once
#include "Shape.h"
/*!
 * @brief Класс прямоугольных примитив
 *
 */
class Rectangle : public Shape {
private:
  unsigned int height; //!< Высота
  unsigned int width;  //!< Ширина
public:
  /*!
   * @brief Конструктор
   *
   * @param x Координата начальной точки по оси X
   * @param y Координата начальной точки по оси Y
   * @param height Высота
   * @param width Ширина
   */
  Rectangle(unsigned int x, unsigned int y, unsigned int height,
            unsigned int width);
  /*!
   * @brief Отобразить фигуру
   *
   */
  void draw();
  /*!
   * @brief Деструктор
   *
   */
  ~Rectangle();
};