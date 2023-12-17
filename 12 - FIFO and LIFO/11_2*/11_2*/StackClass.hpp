#ifndef StackClass_h
#define StackClass_h

#include "DataClass.hpp"
#include <vector>
#include <iostream>
#include <stdio.h>

class Stack: public Data{
    public:
    std::vector<int> m;
    void push(int);
    int pop();
    Stack(std::vector<int> x): m(x){
    }
    Stack(){
    }
};

#endif /* StackClass_h */

