#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

#include "coordinate.h"

int main()
{
    bool vertical = true;

    std::vector<Coordinate> coordinateVector = {{4,4}, {8,4}, {6,4}, {2, 6}, {10, 6}};

    unsigned short maximumX = max_element(coordinateVector.begin(), coordinateVector.end())->X();
    unsigned short mininalX = min_element(coordinateVector.begin(), coordinateVector.end())->X();
    unsigned short middleX = (maximumX + mininalX) / 2;

    std::unordered_map<Coordinate, int, CoordinateHash> coordinateMap;

    for (auto x : coordinateVector)
    {
        coordinateMap.insert({x, 0});
    }

    for (auto x : coordinateMap)
    {
        Coordinate buf(2 * middleX - x.first.X(), x.first.Y());
        if (coordinateMap.find(buf) == coordinateMap.end())
        {
            vertical = false;
            break;
        }
    }

    if (vertical)
    {
        std::cout<<"Line exists, x = "<<middleX<<std::endl;
    }
    else
    {
        std::cout<<"Line doesn't exist"<<std::endl;
    }

    return 0;
}
