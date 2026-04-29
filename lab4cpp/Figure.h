#ifndef FIGURE_H
#define FIGURE_H

#include <cmath>
#include <vector>

struct Point {
    double x, y;
};

class Figure {
protected:
    Point vertices[3]; // Координати 3-х вершин для трикутника

public:
    // Конструктори
    Figure(); // За замовчуванням
    Figure(Point p1, Point p2, Point p3); // З параметрами
    Figure(const Figure& other); // Копіювання

    // Метод обчислення довжини сторони між двома точками
    double calculateSideLength(Point a, Point b) const;

    // Геттери (для доступу до даних без прямої зміни)
    Point getVertex(int index) const;
};

#endif