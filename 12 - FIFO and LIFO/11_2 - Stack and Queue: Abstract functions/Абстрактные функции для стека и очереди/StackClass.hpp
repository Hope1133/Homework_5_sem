//Hаследование обоих классов от интерфейса

#ifndef StackClass_h
#define StackClass_h

#include"BasicClass.hpp"
#include <vector>
#include <iostream>
#include <stdio.h>

class Stack: public Basic{
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
