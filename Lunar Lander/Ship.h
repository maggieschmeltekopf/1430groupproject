#pragma once
class Ship
{
public:
    Ship();
    ~Ship();

    void Draw(double x, double y);
    void Update(double deltaTime);

private:
    double verticalVelocity;
    double horizontalVelocity;
};

