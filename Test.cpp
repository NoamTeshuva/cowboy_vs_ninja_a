#include <stdexcept>
#include <iostream>
#include "doctest.h"
#include "sources/Team.hpp"


using namespace ariel;


TEST_CASE("Initilizae")
{
Point p1(1,5);
Point p2(2,5);
Point p3(3,5);
Point p4(4,5);

CHECK_NOTHROW(Cowboy("Tom",p1));
CHECK_NOTHROW(YoungNinja("s",p2));
CHECK_NOTHROW(OldNinja("x",p3));
CHECK_NOTHROW(TrainedNinja("z",p4));


}

TEST_CASE("Creating a team")
{
Point p1(1,5);
Point p2(2,5);
Point p3(3,5);
Point p4(4,5);
Cowboy Tom("Tom",p1);
YoungNinja s("s",p2);
OldNinja x ("x",p3);
YoungNinja z("z",p4);

CHECK_NOTHROW(Team a(&Tom));
CHECK_NOTHROW(Team b(&s));
}

TEST_CASE("action form Character")
{
Point p1(1,5);
Point p2(2,5);
Point p3(3,5);
Point p4(4,5);
Cowboy Tom("Tom",p1);
YoungNinja s("s",p2);
OldNinja x ("x",p3);
TrainedNinja z("z",p4);


CHECK(Tom.hasboolets()==true);

CHECK_NOTHROW(Tom.shoot(&s));
}


TEST_CASE("Character Initialization")
{
    Point p1(1, 5);
    Point p2(2, 5);
    Point p3(3, 5);
    Point p4(4, 5);

    CHECK_NOTHROW(Cowboy("Tom", p1));
    CHECK_NOTHROW(YoungNinja("s", p2));
    CHECK_NOTHROW(OldNinja("x", p3));
    CHECK_NOTHROW(TrainedNinja("z", p4));
}

TEST_CASE("Creating a Team")
{
    Point p1(1, 5);
    Point p2(2, 5);
    Point p3(3, 5);
    Point p4(4, 5);

    Cowboy Tom("Tom", p1);
    YoungNinja s("s", p2);
    OldNinja x("x", p3);
    TrainedNinja z("z", p4);

    CHECK_NOTHROW(Team a(&Tom));
    CHECK_NOTHROW(Team b(&s));
}

TEST_CASE("Character Actions")
{
    Point p1(1, 5);
    Point p2(2, 5);
    Point p3(3, 5);
    Point p4(4, 5);

    Cowboy Tom("Tom", p1);
    YoungNinja s("s", p2);
    OldNinja x("x", p3);
    TrainedNinja z("z", p4);

    CHECK(Tom.hasboolets() == true);
    CHECK_NOTHROW(Tom.shoot(&s));
}

TEST_CASE("Character Information")
{
    Point p1(1, 5);
    Point p2(2, 5);
    Point p3(3, 5);
    Point p4(4, 5);

    Cowboy Tom("Tom", p1);
    YoungNinja s("s", p2);
    OldNinja x("x", p3);
    TrainedNinja z("z", p4);

    CHECK(Tom.isAlive() == true);
    CHECK(s.isAlive() == true);
    CHECK(x.isAlive() == true);
    CHECK(z.isAlive() == true);

    CHECK(Tom.getLocation().getX() == 1);
    CHECK(Tom.getLocation().getY() == 5);
    CHECK(s.getLocation().getX() == 2);
    CHECK(s.getLocation().getY() == 5);
    CHECK(x.getLocation().getX() == 3);
    CHECK(x.getLocation().getY() == 5);
    CHECK(z.getLocation().getX() == 4);
    CHECK(z.getLocation().getY() == 5);

    Tom.hit(30);
    s.hit(50);
    x.hit(70);
    z.hit(90);

    CHECK(Tom.isAlive() == true);
    CHECK(s.isAlive() == true);
    CHECK(x.isAlive() == true);
    CHECK(z.isAlive() == true);

    CHECK(Tom.getDS() == 110);
    CHECK(s.getDS() == 50);
    CHECK(x.getDS() == 70);
    CHECK(z.getDS() == 30);

    Tom.setName("Tommy");
    s.setLocation(Point(10, 10));
    x.setName("Xavier");
    z.setLocation(Point(8, 8));

    CHECK(Tom.getName() == "Tommy");
}

