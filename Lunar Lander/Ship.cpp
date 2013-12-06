#include "Ship.h"
#include <fstream>
#include "Plotter.h"


Ship::Ship()
{
}


Ship::~Ship()
{
}

void Ship::Draw(double deltaTime)
{
    // draw ship
    
    
    ink rocket[5][5] = {{BLACK, BLACK, GREEN, BLACK, BLACK}, 
                        {BLACK, BLACK, GREEN, BLACK, BLACK}, 
                        {GREEN, YELLOW, GREEN, YELLOW, GREEN}, 
                        {YELLOW, GREEN, YELLOW, GREEN, YELLOW}, 
                        {GREEN, BLACK, BLACK, BLACK, GREEN}};
    
    /*for (int r = 0; r < 5; r++)
    {
        for (int c = 0; c < 5; c++)
        {
            file >> pixel;
            rocket[r][c] = pixel;
        }
    }*/
    
}

void Ship::Update(double deltaTime)
{
    // do animations
    // check for collisions
}
