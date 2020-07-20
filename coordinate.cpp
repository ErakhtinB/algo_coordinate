#include "coordinate.h"

namespace  coordinate
{

bool Coordinate::operator== (const Coordinate& c) const
{
    return x == c.x && y == c.y;
}

bool Coordinate::operator< (const Coordinate& c) const
{
    return x < c.x;
}

std::size_t CoordinateHash::operator()(const Coordinate& p) const
{
    return p.x ^ p.x;
}

}
