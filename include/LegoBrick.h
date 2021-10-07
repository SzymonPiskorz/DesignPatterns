#include "Brick.h"
#include <iostream>

class LegoBrick  : public Brick
{
public:
    LegoBrick(){}
    void draw()
    {
        std::cout << "Getting Lego brick" << std::endl;
    }
};