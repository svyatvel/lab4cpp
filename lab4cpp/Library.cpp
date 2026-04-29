#include "Triangle.h"
#include <sstream>
#include <iomanip>

// Figure implementation
Figure::Figure() {
    for (int i = 0; i < 3; ++i) { vertices[i] = { 0, 0 }; }
}

Figure::Figure(Point p1, Point p2, Point p3) {
    vertices[0] = p1; vertices[1] = p2; vertices[2] = p3;
}

Figure::Figure(const Figure& other) {
    for (int i = 0; i < 3; ++i) { vertices[i] = other.vertices[i]; }
}

double Figure::calculateSideLength(Point a, Point b) const {
    return std::sqrt(std::pow(b.x - a.x, 2) + std::pow(b.y - a.y, 2));
}

Point Figure::getVertex(int index) const {
    return (index >= 0 && index < 3) ? vertices[index] : Point{ 0,0 };
}

// Triangle implementation
double Triangle::calculatePerimeter() const {
    double a = calculateSideLength(vertices[0], vertices[1]);
    double b = calculateSideLength(vertices[1], vertices[2]);
    double c = calculateSideLength(vertices[2], vertices[0]);
    return a + b + c;
}

double Triangle::calculateArea() const {
    // Формула Герона або через координати
    return 0.5 * std::abs(vertices[0].x * (vertices[1].y - vertices[2].y) +
        vertices[1].x * (vertices[2].y - vertices[0].y) +
        vertices[2].x * (vertices[0].y - vertices[1].y));
}

std::string Triangle::getObjectData() const {
    std::stringstream ss;
    ss << "Вершини трикутника: ";
    for (int i = 0; i < 3; ++i) {
        ss << "(" << vertices[i].x << ";" << vertices[i].y << ") ";
    }
    return ss.str();
}