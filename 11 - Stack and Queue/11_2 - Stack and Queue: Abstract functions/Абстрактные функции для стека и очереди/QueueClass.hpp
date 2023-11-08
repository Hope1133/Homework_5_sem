
#ifndef QueueClass_h
#define QueueClass_h

#include"BasicClass.hpp"
#include <vector>
#include <iostream>
#include <stdio.h>

class Queue: public Basic{
    public:
    void push(int);
    int pop();
};
#endif /* QueueClass_h */
