#include "queue.cpp"
#include "coord3d.cpp"
int main()
{
      Queue n1{3};
      n1.Push(5);
      n1.Push(6);
      n1.Push(7);
    n1.Pop();
      n1.printElem();
      Queue n2{6};
      n2.Push(9);
      n2.Push(10);
      n2.Push(11);
      n2.Push(12);
      n2.Push(13);
      std::cout << "\n";
      Queue n3 = n1 + n2;
      n3.printElem();
    return 0;
}