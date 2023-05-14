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
#include "TrainedNinja.hpp"
#include "string"
using namespace std;

TrainedNinja::TrainedNinja(string name, Point point)
{
    this->name = name;
    this->location = point;
    this->speed = 14;
    this->hp = 100;
}
