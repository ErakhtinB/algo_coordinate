#ifndef COORDINATE_H
#define COORDINATE_H

#include <cstdint>

namespace coordinate
{

using CoordinateType = std::uint64_t;

struct Coordinate
{
    Coordinate() = delete;
    Coordinate(CoordinateType x, CoordinateType y);

    CoordinateType X() const;
    CoordinateType Y() const;

    bool operator == (const Coordinate& c) const;
    bool operator < (const Coordinate& c) const;

private:
    CoordinateType m_x;
    CoordinateType m_y;
};

struct CoordinateHash
{
    std::size_t operator()(const Coordinate& p) const;
};

}

#endif // COORDINATE_H
