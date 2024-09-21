//Să se definească operatorii "<<" şi ">>" pentru ieşiri/intrări de obiecte, 
// precum şi pentru inserarea/eliminarea elementelor în/din coadă.
#include "queue.cpp"
#include "coord3d.cpp"
int main()
{
      Coord3d c1{1,2,3};
      Coord3d c2{9,10,12};
      c1 = c1 + 5;
      c1.readCoords();

      c2 = c2 - 2;
      c2.readCoords();

      c1 = 2;
      c1.readCoords();

      if (c1!=c2)
      {
        std::cout << "Cordonatele sunt diferite \n";
      }
      if (c)
      {
        /* code */
      }
      
      


      
    return 0;
}