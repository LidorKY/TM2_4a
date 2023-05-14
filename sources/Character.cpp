#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>
#include "Point.hpp"
#include "Character.hpp"
using namespace std;

Character::Character() {}
Character::Character(Point point1, int hit_points, string name) {}
bool Character::isAlive() { return true; }
double Character::distance(Character *other) { return 0.0; }
void Character::hit(int num) {}
string Character::getName() { return this->name; }
Point Character::getLocation() { return this->location; }
string Character::print() { return "delete_me_later"; }