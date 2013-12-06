#include "World.h"

World::World()
{
}


World::~World()
{
}

void World::Draw(double deltaTime)
{
    ground.Draw(deltaTime);
    ship.Draw(deltaTime);
}

void World::Update(double deltaTime)
{
    ground.Update(deltaTime);
    ship.Draw(deltaTime);
}
