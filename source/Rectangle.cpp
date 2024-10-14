#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(Point topLeft, Point bottomRight) : topLeft(topLeft), bottomRight(bottomRight) {}

void Rectangle::draw() const {
    std::cout << "Drawing Rectangle from (" << topLeft.x << ", " << topLeft.y << ") to (" << bottomRight.x << ", " << bottomRight.y << ")" << std::endl;
}

void Rectangle::writeToFile(std::ofstream &out) const {
    // Gnuplot format for a rectangle
    out << "# Rectangle\n";
    out << topLeft.x << " " << topLeft.y << "\n";
    out << bottomRight.x << " " << topLeft.y << "\n";
    out << bottomRight.x << " " << bottomRight.y << "\n";
    out << topLeft.x << " " << bottomRight.y << "\n";
    out << topLeft.x << " " << topLeft.y << "\n\n";
}
