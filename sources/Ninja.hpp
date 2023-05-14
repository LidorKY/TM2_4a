#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>
#include <stdio.h>
#include "Point.hpp"
#include "Character.hpp"
#include "string"
using namespace std;

class Ninja : public Character
{
    protected:
    int speed;

    public:
    void move(Character* enemy);
    void slash(Character* enemy);
};