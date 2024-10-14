#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Point.h"
#include "Shape.h"

class Rectangle : public Shape {
private:
    Point topLeft, bottomRight;
public:
    Rectangle(Point topLeft, Point bottomRight);
    void draw() const override;
    void writeToFile(std::ofstream &out) const override;
};

#endif
