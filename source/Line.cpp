#include "Line.h"
#include <iostream>

Line::Line(Point start, Point end) : start(start), end(end) {}

void Line::draw() const {
    std::cout << "Drawing Line from (" << start.x << ", " << start.y << ") to (" << end.x << ", " << end.y << ")" << std::endl;
}

void Line::writeToFile(std::ofstream &out) const {
    // Gnuplot format for a line
    out << "# Line\n";
    out << start.x << " " << start.y << "\n";
    out << end.x << " " << end.y << "\n\n";
}
