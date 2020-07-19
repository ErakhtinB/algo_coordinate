#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>

#include "coordinate.h"

int main()
{
    std::vector<coordinate::Coordinate> coordinateVector = {{4,4}, {8,4}, {6,4}, {2, 6}, {10, 6}};
    auto maximumX = max_element(coordinateVector.begin(), coordinateVector.end())->X();
    auto mininalX = min_element(coordinateVector.begin(), coordinateVector.end())->X();
    auto middleX = (maximumX + mininalX) / static_cast<coordinate::CoordinateType>(2);
    std::unordered_set<coordinate::Coordinate, coordinate::CoordinateHash> coordinateMap(
                                                                            coordinateVector.begin(),
                                                                            coordinateVector.end());
    bool verticalLineExists = true;
    for (auto x : coordinateMap)
    {
        if (coordinateMap.find({coordinate::CoordinateType(2) * middleX - x.X(), x.Y()}) == coordinateMap.end())
        {
            verticalLineExists = false;
            break;
        }
    }
    if (verticalLineExists)
    {
        std::cout << "Line exists, x = " << +middleX << std::endl;
    }
    else
    {
        std::cout << "Line doesn't exist" << std::endl;
    }
    return 0;
}
