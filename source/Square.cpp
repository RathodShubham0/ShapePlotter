#include "Square.h"

Square::Square(Point topLeft, double sideLength) 
    : Rectangle(topLeft, Point(topLeft.x + sideLength, topLeft.y - sideLength)) {}
