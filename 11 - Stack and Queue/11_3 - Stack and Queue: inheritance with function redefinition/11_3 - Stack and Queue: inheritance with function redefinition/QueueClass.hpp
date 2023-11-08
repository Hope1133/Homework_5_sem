
#ifndef QueueClass_h
#define QueueClass_h

#include "StackClass.hpp"
#include <vector>
#include <iostream>

class Queue: public Stack{
public:
    void push(int);
    int pop();
};
#endif /* QueueClass_h */
