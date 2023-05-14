#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>
#include "Point.hpp"
using namespace std;

Point::Point()
{
    Point(0.0, 0.0);
}

Point::Point(double x, double y) : axis_X(x), axis_Y(y)
{
    this->axis_X = x;
    this->axis_Y = y;
}

double Point::distance(Point point1)
{
    return 0.0;
}
void Point::print(Point point1) {}
Point Point::moveTowards(Point sorce_point, Point destination_point, double distance)
{
    return Point();
}
