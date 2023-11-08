
#ifndef StackClass_h
#define StackClass_h

#include"BasicClass.hpp"
#include <vector>
#include <iostream>
#include <stdio.h>

class Stack: public Basic{
    public:
    void push(int);
    int pop();
};

#endif /* StackClass_h */
