//Hаследование обоих классов от интерфейса

#ifndef QueueClass_h
#define QueueClass_h

#include"BasicClass.hpp"
#include <vector>
#include <iostream>
#include <stdio.h>

class Queue: public Basic{
    public:
    std::vector<int> m;
    void push(int);
    int pop();
    Queue(std::vector<int> x): m(x){
    }
    Queue(){
    }
};
#endif /* QueueClass_h */
