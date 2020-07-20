#ifndef COORDINATE_H
#define COORDINATE_H

#include <cstdint>

namespace coordinate
{

using CoordinateType = std::uint64_t;

struct Coordinate
{
    CoordinateType x;
    CoordinateType y;
    bool operator == (const Coordinate& c) const;
    bool operator < (const Coordinate& c) const;
};

struct CoordinateHash
{
    std::size_t operator()(const Coordinate& p) const;
};

}

#endif // COORDINATE_H
