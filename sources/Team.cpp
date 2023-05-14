#include <iostream>
#include "Point.hpp"
#include "Character.hpp"
#include "Cowboy.hpp"
#include "Ninja.hpp"
#include "OldNinja.hpp"
#include "TrainedNinja.hpp"
#include "YoungNinja.hpp"
#include "Team.hpp"
#include "vector"
using namespace std;

Team::Team(Character *leader) {}
Team::~Team() {}
Team::Team(const Team &temp) {}
Team &Team::operator=(const Team &other) {return *this;}
Team::Team(Team &&other) noexcept {}
Team &Team::operator=(Team &&other) noexcept {return *this;}
void Team::add(Character *member) {}
void Team::attack(Team *enemy_team) {}
int Team::stillAlive() { return 0; }
void Team::print() {}
