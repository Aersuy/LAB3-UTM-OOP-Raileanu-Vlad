#include "queue.hpp"
#include <iostream>
Queue::Queue()
{
    c_maxSize = DEFAULT_QUEUE_SIZE;
    c_top = -1;
    c_elements = new int[DEFAULT_QUEUE_SIZE];
}
Queue::Queue(int size)
{
    c_maxSize = size;
    c_top = -1;
    c_elements = new int[size];
}
Queue::Queue(const Queue& copy)
{
     c_maxSize = copy.c_maxSize;
     c_top = copy.c_top;
     c_elements = new int[c_maxSize];
     for (int i = 0; i <= c_top; i++)
     {
        c_elements[i] = copy.c_elements[i];
     }
}
Queue::~Queue()
{
    delete[] c_elements;
}
bool Queue::IsEmpty()
{
    if (c_top == -1)
    {
        return true;
    }
    else
    {
        return 0;
    }
}
bool Queue::IsFull()
{
    if (c_top == c_maxSize)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void Queue::Push(int data)
{  if (this->IsFull())
{    std::cout << "Queue is full \n";
    return;
}


    c_top++;
   c_elements[c_top] = data;
}

void Queue::Pop()
{
     if (this->IsEmpty())
    {
        std::cout << "Queue is empty\n";
        return;
    }
    for (int i = 0; i < c_top; i++)
    {
        c_elements[i] = c_elements[i + 1];
    }

    c_top--;  
}

Queue Queue::operator+(const Queue& other)
{  int newSize = c_maxSize + other.c_maxSize - 1;
    Queue newQueue{newSize};
    for (int iterator1 = 0; iterator1 <= c_top; iterator1++)
    {
        newQueue.Push(c_elements[iterator1]);
    }
     for (int iterator1 = 0; iterator1 <= other.c_top; iterator1++)
    {
        newQueue.Push(other.c_elements[iterator1]);
    }
return newQueue;
}
void Queue::printElem()
{
      for (int i = 0; i <= c_top; i++)
     {
         std::cout << c_elements[i] << '\n';
     }
   
}
Queue Queue::operator=(const Queue& other)
{
    c_maxSize = other.c_maxSize;
    c_top = other.c_top;
    c_elements = new int[c_top];
    for (int iterator = 0; iterator <= c_top; iterator++)
    {
        c_elements[iterator] = other.c_elements[iterator];
    }
    
return *this;
}