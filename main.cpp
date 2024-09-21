#include "queue.cpp"
#include "coord3d.cpp"
int main()
{
      Coord3d ne{1,2,3};
      ne.readCoords();
      Coord3d n2 = ne + 1;
      n2.readCoords();

      n2 = ne + n2;
      n2.readCoords();
    return 0;
}