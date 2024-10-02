#ifndef LINE_H
#define LINE_H

#include <fstream>

class Line {
public:
    // Constructor that initializes a line with start and end coordinates
    Line(double x1, double y1, double x2, double y2);

    // Method to write line coordinates to a file
    void writeToFile(std::ofstream& file) const;

private:
    double x1;  // X-coordinate of the starting point
    double y1;  // Y-coordinate of the starting point
    double x2;  // X-coordinate of the ending point
    double y2;  // Y-coordinate of the ending point
};

#endif // LINE_H
