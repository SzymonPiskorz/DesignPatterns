#include "Brick.h"
#include <iostream>

class ClayBrick : public Brick
{
public: 
    ClayBrick(){}
    void draw()
    {
        std::cout << "Getting Clay brick" << std::endl;
    }
};