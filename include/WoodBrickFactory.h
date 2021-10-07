#include "Factory.h"
#include "WoodBrick.h"

class WoodBrickFactory : public Factory
{
public:
    std::vector<Brick*> getBricks(int t_numOfBricks)
    {
        std::vector<Brick*> brickValues;

        for(int i = 0; i< t_numOfBricks; i++)
        {
            brickValues.push_back(new WoodBrick);
        }

        return brickValues;
    }
};