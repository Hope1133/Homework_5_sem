
#ifndef QueueClass_h
#define QueueClass_h

#include "DataClass.hpp"
#include <vector>
#include <iostream>
#include <stdio.h>

class Queue: public Data{
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

// Если есть тело функции, то ; не ставим!!!!
