#pragma once
class Ship
{
public:
    Ship();
    ~Ship();

    void Draw(double deltaTime);
    void Update(double deltaTime);

private:
    double verticalVelocity;
    double horizontalVelocity;
};

