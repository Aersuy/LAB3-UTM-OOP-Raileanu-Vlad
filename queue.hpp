#pragma once
#define DEFAULT_QUEUE_SIZE 9
class Queue {
private:
    int* c_elements;   
    int c_maxSize;      
    int c_top;          

public:
  
    Queue();
    Queue(int);
    Queue(const Queue&);
    ~Queue();
    void Push(int);
    void Pop();
    void printElem();
    bool IsEmpty();
    bool IsFull();
    Queue operator+(const Queue&);
    Queue operator=(const Queue&);
    int norm() const;

    
   friend bool operator==(const Queue&,const Queue&);
   friend bool operator!=(const Queue&,const Queue&);
   friend bool operator<(const Queue&,const Queue&);
   friend bool operator>(const Queue&,const Queue&);
};


