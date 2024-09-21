#include "coord3d.hpp"

Coord3d::Coord3d()
{
    c_x = 1;
    c_y = 1;
    c_z = 1;
}
Coord3d::Coord3d(int input)
{
    c_x = input;
    c_y = input;
    c_z = input;
}
Coord3d::Coord3d(int x,int y, int z)
{
    c_x = x;
    c_y = y;
    c_z = z;
}
