#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>
#include <stdio.h>
#include "Point.hpp"
#include "string"
using namespace std;

class Character
{
protected:
    Point location;
    int hp;
    string name;

public:
    bool isAlive();
    double distance(Character *other);
    void hit(int num);
    string getName();
    Point getLocation();
    string print();
};