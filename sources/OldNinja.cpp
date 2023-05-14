#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>
#include <stdio.h>
#include "Point.hpp"
#include "Character.hpp"
#include "Ninja.hpp"
#include "OldNinja.hpp"
#include "string"
using namespace std;

OldNinja::OldNinja(string name, Point point)
{
    this->name = name;
    this->location = point;
    this->speed = 8;
    this->hp = 150;
}
