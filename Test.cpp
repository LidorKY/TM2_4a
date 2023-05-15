#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include "doctest.h"
#include "sources/Team.hpp"
using namespace std;
using namespace ariel;

TEST_CASE("Check for class - Point")
{
    Point a(1.0, 2.0);
    Point b(3.0, 5.8);
    Point c(7.9, 3.1);
    CHECK(a.distance(b) == 4.2941821107168);
    CHECK(a.distance(b) == b.distance(a));
    CHECK(b.distance(c) == 5.5946402922797);
    CHECK(c.distance(b) == b.distance(c));
}

TEST_CASE("Initialiation of Cowboy and Ninja.")
{
    Point a(32.3, 44), b(1.3, 3.5), c(0.0, 0.0), d(4.33, 29.46);
    Cowboy *tom = new Cowboy("Tom", a);
    OldNinja *sushi = new OldNinja("sushi", b);
    YoungNinja *mushi = new YoungNinja("mushi", c);
    TrainedNinja *kushi = new TrainedNinja("kushi", d);

    CHECK(tom->getName() == "Tom");
    CHECK(tom->isAlive() == true);
    CHECK(tom->hit_points == 110);
    CHECK(tom->num_of_bullets == 6);

    CHECK(sushi->getName() == "sushi");
    CHECK(sushi->isAlive() == true);
    CHECK(sushi->hit_points == 150);
    CHECK(sushi->speed == 8);

    CHECK(mushi->getName() == "mushi");
    CHECK(mushi->isAlive() == true);
    CHECK(mushi->hit_points == 100);
    CHECK(mushi->speed == 14);

    CHECK(kushi->getName() == "kushi");
    CHECK(kushi->isAlive() == true);
    CHECK(kushi->hit_points == 120);
    CHECK(kushi->speed == 12);
}

TEST_CASE("Cowboy vs Ninja")
{
    Point a(32.3, 44), b(1.3, 3.5);
    Cowboy *tom = new Cowboy("Tom", a);
    OldNinja *sushi = new OldNinja("sushi", b);
    CHECK(tom->distance(sushi) == 5);
    CHECK(tom->hasboolets() == true);
    tom->shoot(sushi);
    CHECK(tom->hasboolets() == true);
    tom->shoot(sushi);
    CHECK(tom->hasboolets() == true);
    tom->shoot(sushi);
    tom->shoot(sushi);
    tom->shoot(sushi);
    tom->shoot(sushi);
    CHECK(tom->hasboolets() == false);
    tom->reload();
    CHECK(tom->hasboolets() == true);
    CHECK(sushi->isAlive() == true);
}

TEST_CASE("Check for class -Team")
{
    Point a(32.3, 44), b(1.3, 3.5), c(0.0, 0.0), d(4.33, 29.46);
    Cowboy *tom = new Cowboy("Tom", a);
    OldNinja *sushi = new OldNinja("sushi", b);
    YoungNinja *mushi = new YoungNinja("mushi", c);
    TrainedNinja *kushi = new TrainedNinja("kushi", d);

    /*----Init teams----*/
    Team team1(tom);
    CHECK(team1._leader == tom);
    CHECK(team1.stillAlive() == true);
    CHECK_THROWS(team1.add(tom));

    Team team2(sushi);
    CHECK(team2._leader == sushi);
    CHECK(team2.stillAlive() == true);
    CHECK_THROWS(team2.add(sushi));

    Team team3(mushi);
    CHECK(team3._leader == mushi);
    CHECK(team3.stillAlive() == true);
    CHECK_THROWS(team3.add(mushi));

    Team team4(kushi);
    CHECK(team4._leader == kushi);
    CHECK(team4.stillAlive() == true);
    CHECK_THROWS(team4.add(kushi));
    /*----Init teams----*/

    /*----playing + killing the leader*/
    team1.attack(&team2);
    CHECK(team2._leader == sushi);
    CHECK(team2.stillAlive() == true);

    team3.attack(&team4);
    CHECK(team4._leader == kushi);
    CHECK(team4.stillAlive() == true);
    /*----playing + killing the leader*/
}
