#ifndef COORDINATE_H
#define COORDINATE_H

struct Coordinate
{
    Coordinate(unsigned short x, unsigned short y);

    unsigned short X() const;
    unsigned short Y() const;

    bool operator == (const Coordinate &c) const;
    bool operator < (const Coordinate &c) const;

private:
    unsigned short x;
    unsigned short y;
};

struct CoordinateHash
{
    unsigned long operator()(const Coordinate& p) const;
};

#endif // COORDINATE_H
