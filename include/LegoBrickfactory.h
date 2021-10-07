#include "Factory.h"
#include "LegoBrick.h"

class LegoBrickFactory : public Factory
{
public:
    std::vector<Brick*> getBricks(int t_numOfBricks)
    {
        std::vector<Brick*> brickValues;

        for(int i = 0; i< t_numOfBricks; i++)
        {
            brickValues.push_back(new LegoBrick);
        }

        return brickValues;
    }
};