#include "Ship.h"



Ship::Ship()
{
    rocket[0][0] = black;
    rocket[0][1] = black;
    rocket[0][2] = green;
    rocket[0][3] = black;
    rocket[0][4] = black;

    rocket[1][0] = green;
    rocket[1][1] = green;
    rocket[1][2] = green;
    rocket[1][3] = green;
    rocket[1][4] = green;

    rocket[2][0] = green;
    rocket[2][1] = yellow;
    rocket[2][2] = green;
    rocket[2][3] = yellow;
    rocket[2][4] = green;

    rocket[3][0] = yellow;
    rocket[3][1] = green;
    rocket[3][2] = yellow;
    rocket[3][3] = green;
    rocket[3][4] = yellow;

    rocket[4][0] = green;
    rocket[4][1] = black;
    rocket[4][2] = black;
    rocket[4][3] = black;
    rocket[4][4] = green;
}


Ship::~Ship()
{

}

void Ship::Draw(double x, double y)
{
    // draw ship
    Plotter p;




    for (int r = 0; r < 5; r++)
    {
        for (int c = 0; c < 5; c++)
        {
            p.setColor(rocket[r][c]);
            p.plot(x + c, y + r, SQUARE);
        }
    }

}

void Ship::Update(double deltaTime)
{
    // do animations
    // check for collisions
}
