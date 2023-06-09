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
#include "string"
using namespace std;

class OldNinja : public Ninja
{
private:
public:
    OldNinja(string name, Point point);
    // ~OldNinja();
    // OldNinja(const OldNinja &temp);
    // OldNinja &operator=(const OldNinja &other);
    // OldNinja(OldNinja &&other) noexcept;
    // OldNinja &operator=(OldNinja &&other) noexcept;
    void move(Character *enemy);
};