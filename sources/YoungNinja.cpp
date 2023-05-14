#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>
#include <stdio.h>
#include "Point.hpp"
#include "Character.hpp"
#include "Ninja.hpp"
#include "YoungNinja.hpp"
#include "string"
using namespace std;

YoungNinja::YoungNinja(string name, Point point)
{
    this->name = name;
    this->location = point;
    this->speed = 14;
    this->hit_points = 100;
}
YoungNinja::~YoungNinja() {}
YoungNinja::YoungNinja(const YoungNinja &temp) {}
YoungNinja &YoungNinja::operator=(const YoungNinja &other) {return *this;}
YoungNinja::YoungNinja(YoungNinja &&other) noexcept {}
YoungNinja &YoungNinja::operator=(YoungNinja &&other) noexcept {return *this;}
