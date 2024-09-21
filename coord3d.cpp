#pragma once
#include "coord3d.hpp"
#include <iostream>
#include <stdbool.h>
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
void Coord3d::readCoords()
{
    std::cout << " x : " << c_x << "\n y : " << c_y << "\n y : " << c_z << '\n';
}
Coord3d Coord3d::operator+(double data)
{
    int tx,ty,tz;
    tx = c_x + data;
    ty = c_y + data;
    tz = c_z + data;
    Coord3d n{tx,ty,tz};
    return n;
}
Coord3d Coord3d::operator+(const Coord3d& other)
{
    int tx,ty,tz;
    tx = c_x + other.c_x;
    ty = c_y + other.c_y;
    tz = c_z + other.c_z;
    Coord3d n{tx,ty,tz};
    return n;
}
Coord3d Coord3d::operator-(double data)
{
    int tx,ty,tz;
    tx = c_x - data;
    ty = c_y - data;
    tz = c_z - data;
    Coord3d n{tx,ty,tz};
    return n;
}
Coord3d Coord3d::operator-(const Coord3d& other)
{
    int tx,ty,tz;
    tx = c_x - other.c_x;
    ty = c_y - other.c_y;
    tz = c_z - other.c_z;
    Coord3d n{tx,ty,tz};
    return n;
}

Coord3d Coord3d::operator=(double data)
{
     int tx,ty,tz;
    tx = data;
    ty = data;
    tz = data;
    Coord3d n{tx,ty,tz};
    return n;


}
Coord3d Coord3d::operator=(const Coord3d& other)
{
     int tx,ty,tz;
    tx = other.c_x;
    ty = other.c_y;
    tz = other.c_z;
    Coord3d n{tx,ty,tz};
    return n;


}
bool operator==(const Coord3d& one,const Coord3d& second)
{ bool output = true;
   if (one.c_x != second.c_x)
   {
    output = false;
   }
   if (one.c_y != second.c_y)
   {
    output = false;
   }
   if (one.c_z != second.c_z)
   {
    output = false;
   }
return output;
}