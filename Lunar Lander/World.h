#pragma once

#include "Ship.h"
#include "Ground.h"

class World
{
public:
    World();
    ~World();

private:
    Ship ship;
    Ground ground;
};

