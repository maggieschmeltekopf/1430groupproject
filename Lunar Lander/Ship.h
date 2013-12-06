#pragma once
#include "Plotter.h"

class Ship
{
public:
    Ship();
    ~Ship();

    void Draw(double x, double y);
    void Update(double deltaTime);

private:
    ink rocket[5][5];
    double verticalVelocity;
    double horizontalVelocity;
};
