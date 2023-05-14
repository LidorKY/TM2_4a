#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>
#include <stdio.h>
using namespace std;

class Point{
    private:
    double axis_X;
    double axis_Y;

    public:
    Point();
    Point(double x, double y);

    double distance(Point point1);
    void print(Point point1);
    Point moveTowards(Point sorce_point, Point destination_point, double distance);

};

