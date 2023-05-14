#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>
#include "Point.hpp"
#include "Character.hpp"
#include "Cowboy.hpp"
using namespace std;

Cowboy::Cowboy(string name, Point point) : num_of_bullets(6), Character(point, 110, name){}
Cowboy::~Cowboy() {}
Cowboy::Cowboy(const Cowboy &temp) {}
Cowboy &Cowboy::operator=(const Cowboy &other) { return *this; }
Cowboy::Cowboy(Cowboy &&other) noexcept {}
Cowboy &Cowboy::operator=(Cowboy &&other) noexcept { return *this; }
void Cowboy::shoot(Character *enemy) {}
bool Cowboy::hasboolets() { return true; }
void Cowboy::reload() {}
string Cowboy::print() { return ""; }