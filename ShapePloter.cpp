#include <iostream>
#include <fstream>
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Line.h"

void saveShapeToFile(const Shape& shape) {
    std::ofstream outFile("shapes.dat", std::ios::app);
    shape.writeToFile(outFile);
    outFile.close();
}

int main() {
    int choice;
    std::cout << "Choose a shape to draw:\n";
    std::cout << "1. Circle\n2. Rectangle\n3. Square\n4. Line\n";
    std::cin >> choice;

    switch (choice) {
    case 1: {
        double x, y, radius;
        std::cout << "Enter center (x y) and radius: ";
        std::cin >> x >> y >> radius;
        Circle circle(Point(x, y), radius);
        circle.draw();
        saveShapeToFile(circle);
        break;
    }
    case 2: {
        double x1, y1, x2, y2;
        std::cout << "Enter top-left (x y) and bottom-right (x y) corners: ";
        std::cin >> x1 >> y1 >> x2 >> y2;
        Rectangle rect(Point(x1, y1), Point(x2, y2));
        rect.draw();
        saveShapeToFile(rect);
        break;
    }
    case 3: {
        double x, y, sideLength;
        std::cout << "Enter top-left (x y) and side length: ";
        std::cin >> x >> y >> sideLength;
        Square square(Point(x, y), sideLength);
        square.draw();
        saveShapeToFile(square);
        break;
    }
    case 4: {
        double x1, y1, x2, y2;
        std::cout << "Enter start point (x y) and end point (x y): ";
        std::cin >> x1 >> y1 >> x2 >> y2;
        Line line(Point(x1, y1), Point(x2, y2));
        line.draw();
        saveShapeToFile(line);
        break;
    }
    default:
        std::cout << "Invalid choice!\n";
        break;
    }

    std::cout << "Shapes saved to shapes.dat for Gnuplot visualization.\n";
    return 0;
}
