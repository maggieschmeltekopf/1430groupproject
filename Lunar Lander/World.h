#pragma once

#include "Ship.h"
#include "Ground.h"

const double GRAVITY_MOON = 1.622;      // M/S^2
const double GRAVITY_EARTH = 9.8;       // M/S^2
const double GRAVITY_MARS = 3.17;       // M/S2^2
const double GRAVITY_JUPITER = 27.79;   // M/S^2

class World
{
public:
    World();
    ~World();

private:
    Ship ship;
    Ground ground;
};

