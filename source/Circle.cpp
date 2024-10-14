#include "Circle.h"
#include <iostream>
#include <math.h>

Circle::Circle(Point center, double radius) : center(center), radius(radius) {}

void Circle::draw() const {
    std::cout << "Drawing Circle at (" << center.x << ", " << center.y << ") with radius " << radius << std::endl;
}

void Circle::writeToFile(std::ofstream &out) const {
    // Gnuplot format for a circle
    out << "# Circle\n";
    for (double angle = 0; angle <= 360; angle += 1) {
        double rad = angle * 3.14159265358979323846 / 180;
        double x = center.x + radius * cos(rad);
        double y = center.y + radius * sin(rad);
        out << x << " " << y << "\n";
    }
    out << "\n";
}
