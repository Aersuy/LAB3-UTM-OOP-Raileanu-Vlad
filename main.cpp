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
      n2.printElem();
    return 0;
}