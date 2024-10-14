#ifndef CIRCLE_H
#define CIRCLE_H

#include "Point.h"
#include "Shape.h"

class Circle : public Shape {
private:
    Point center;
    double radius;
public:
    Circle(Point center, double radius);
    void draw() const override;
    void writeToFile(std::ofstream &out) const override;
};

#endif
