#include "Brick.h"
#include <iostream>

class WoodBrick  : public Brick
{
public:
    WoodBrick(){}
    void draw()
    {
        std::cout << "Getting Wood brick" << std::endl;
    }
};