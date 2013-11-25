#pragma once
class Ship
{
public:
    Ship();
    ~Ship();

    void Draw();

private:
    double verticalVelocity;
    double horizontalVelocity;
};

