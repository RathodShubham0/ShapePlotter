#ifndef SHAPE_H
#define SHAPE_H

#include <fstream>

class Shape {
public:
    virtual void draw() const = 0; // Pure virtual function
    virtual void writeToFile(std::ofstream &out) const = 0;
    virtual ~Shape() = default;  // Virtual destructor
};

#endif
