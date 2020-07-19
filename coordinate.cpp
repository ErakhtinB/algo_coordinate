#include "coordinate.h"

namespace  coordinate
{

Coordinate::Coordinate(CoordinateType x, CoordinateType y) : m_x(x), m_y(y) {}

bool Coordinate::operator== (const Coordinate& c) const
{
    return m_x == c.m_x && m_y == c.m_y;
}

bool Coordinate::operator< (const Coordinate& c) const
{
    return m_x < c.m_x;
}

CoordinateType Coordinate::X() const
{
    return m_x;
}
CoordinateType Coordinate::Y() const
{
    return m_y;
}

std::size_t CoordinateHash::operator()(const Coordinate& p) const
{
    return p.X() ^ p.Y();
}

}
