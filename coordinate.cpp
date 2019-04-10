#include "coordinate.h"

Coordinate::Coordinate(unsigned short x, unsigned short y) : x(x), y(y) {}

bool Coordinate::operator== (const Coordinate &c) const
{
    return x == c.x && y == c.y;
}

bool Coordinate::operator< (const Coordinate &c) const
{
    return x < c.x;
}

unsigned short Coordinate::X() const
{
    return x;
}
unsigned short Coordinate::Y() const
{
    return y;
}

unsigned long CoordinateHash::operator()(const Coordinate& p) const
{
    return p.X() << (sizeof(unsigned short) * 8) | p.Y();
}
