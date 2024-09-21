//Să se definească operatorii "<<" şi ">>" pentru ieşiri/intrări de obiecte, 
// precum şi pentru inserarea/eliminarea elementelor în/din coadă.
#include "queue.cpp"
#include "coord3d.cpp"
int main()
{
      Queue n1{3};
      n1.Push(5);
      n1.Push(6);
      n1.Push(7);
   
      
      Queue n2{};
      n2 = n1;
      n2.Push(10);
      n1.Push(1);
      if (n1 < n2)
      {
       std::cout << "Merge \n";
      }
      else
      {
        std::cout << "Dea pula \n";
      }
      
    return 0;
}