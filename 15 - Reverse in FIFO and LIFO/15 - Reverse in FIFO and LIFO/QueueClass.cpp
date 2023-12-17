#include <vector>
#include <iostream>
#include "DataClass.hpp"
#include "QueueClass.hpp"

void Queue::push(int x){
    m.push_back(x);
}

int Queue::pop(){
    int first_element=m[0];
    m.erase(m.begin());
    return first_element;
}

