#include <iostream>
#include "Triangle.h"

int main() {
    setlocale(LC_ALL, "Ukrainian");

    Point p1 = { 0, 0 }, p2 = { 3, 0 }, p3 = { 0, 4 };
    Triangle myTriangle(p1, p2, p3);

    std::cout << myTriangle.getObjectData() << std::endl;
    std::cout << "Периметр: " << myTriangle.calculatePerimeter() << std::endl;
    std::cout << "Площа: " << myTriangle.calculateArea() << std::endl;

    return 0;
}