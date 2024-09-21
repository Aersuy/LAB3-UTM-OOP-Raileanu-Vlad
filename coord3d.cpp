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
Coord3d::Coord3d(double input)
{
    c_x = input;
    c_y = input;
    c_z = input;
}
Coord3d::Coord3d(double x,double y,double z)
{
    c_x = x;
    c_y = y;
    c_z = z;
}
void Coord3d::readCoords()
{
    std::cout << " x : " << c_x << "\n y : " << c_y << "\n z : " << c_z << '\n';
}
Coord3d Coord3d::operator+(double data)
{
    double tx,ty,tz;
    tx = c_x + data;
    ty = c_y + data;
    tz = c_z + data;
    Coord3d n{tx,ty,tz};
    return n;
}
Coord3d Coord3d::operator+(const Coord3d& other)
{
    double tx,ty,tz;
    tx = c_x + other.c_x;
    ty = c_y + other.c_y;
    tz = c_z + other.c_z;
    Coord3d n{tx,ty,tz};
    return n;
}
Coord3d Coord3d::operator-(double data)
{
    double tx,ty,tz;
    tx = c_x - data;
    ty = c_y - data;
    tz = c_z - data;
    Coord3d n{tx,ty,tz};
    return n;
}
Coord3d Coord3d::operator-(const Coord3d& other)
{
    double tx,ty,tz;
    tx = c_x - other.c_x;
    ty = c_y - other.c_y;
    tz = c_z - other.c_z;
    Coord3d n{tx,ty,tz};
    return n;
}

void Coord3d::operator=(double data)
{
    
    this->c_x = data;
    this->c_y = data;
    this->c_z = data;

}
void Coord3d::operator=(const Coord3d& other)
{

    this->c_x = other.c_x;
    this->c_y = other.c_y;
    this->c_z = other.c_z;
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
bool operator!=(const Coord3d& one,const Coord3d& second)
{ bool output = false;
   if (one.c_x != second.c_x)
   {
    output = true;
   }
   if (one.c_y != second.c_y)
   {
    output = true;
   }
   if (one.c_z != second.c_z)
   {
    output = true;
   }
return output;
}
bool operator<(const Coord3d& one,const Coord3d& second)
{ bool output = true;
   if (!(one.c_x < second.c_x))
   {
    output = false;
   }
   if (!(one.c_y < second.c_y))
   {
    output = false;
   }
   if (!(one.c_z < second.c_z))
   {
    output = false;
   }
return output;
}

bool operator>(const Coord3d& one,const Coord3d& second)
{ bool output = true;
   if (!(one.c_x > second.c_x))
   {
    output = false;
   }
   if (!(one.c_y > second.c_y))
   {
    output = false;
   }
   if (!(one.c_z > second.c_z))
   {
    output = false;
   }
return output;
}
