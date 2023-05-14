#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>
#include <stdio.h>
#include "Point.hpp"
#include "Character.hpp"
#include "Ninja.hpp"
#include "string"
using namespace std;

Ninja::Ninja() {}
Ninja::Ninja(Point point1, int hit_points, string name, int speed1) : Character(point1, hit_points, name), speed(speed1) {}
Ninja::~Ninja() {}
Ninja::Ninja(const Ninja &temp) {}
Ninja &Ninja::operator=(const Ninja &other) { return *this; }
Ninja::Ninja(Ninja &&other) noexcept {}
Ninja &Ninja::operator=(Ninja &&other) noexcept { return *this; }
void Ninja::move(Character *enemy) {}
void Ninja::slash(Character *enemy) {}
string Ninja::print() { return ""; }