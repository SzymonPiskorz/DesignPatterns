#include "Factory.h"
#include "ClayBrick.h"

class ClayBrickFactory : public Factory
{
public:
    std::vector<Brick*> getBricks(int t_numOfBricks)
    {
        std::vector<Brick*> brickValues;

        for(int i = 0; i< t_numOfBricks; i++)
        {
            brickValues.push_back(new ClayBrick);
        }

        return brickValues;
    }
};