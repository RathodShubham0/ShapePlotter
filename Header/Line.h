#ifndef LINE_H
#define LINE_H

#include "Point.h"
#include "Shape.h"

class Line : public Shape {
private:
    Point start, end;
public:
    Line(Point start, Point end);
    void draw() const override;
    void writeToFile(std::ofstream &out) const override;
};

#endif
