#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>
#include "Point.hpp"
#include "Character.hpp"
using namespace std;

Character::Character() {}
Character::Character(Point point1, int hit_points1, string name1) : location(point1), hit_points(hit_points1), name(name1) {}
Character::~Character() {}
Character::Character(const Character &temp) {}
Character &Character::operator=(const Character &other) { return *this; }
Character::Character(Character &&other) noexcept {}
Character &Character::operator=(Character &&other) noexcept { return *this; }
bool Character::isAlive() { return true; }
double Character::distance(Character *other) { return 0.0; }
void Character::hit(int num) {}
string Character::getName() { return this->name; }
Point Character::getLocation() { return this->location; }
string Character::print() { return "delete_me_later"; }