#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Figure.h"
#include <string>

class Triangle : public Figure {
public:
    // Явний виклик конструктора базового класу
    Triangle() : Figure() {}
    Triangle(Point p1, Point p2, Point p3) : Figure(p1, p2, p3) {}
    Triangle(const Triangle& other) : Figure(other) {}

    double calculatePerimeter() const;
    double calculateArea() const;
    std::string getObjectData() const;
};

#endif