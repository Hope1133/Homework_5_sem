#include <vector>
#include <iostream>
#include"BasicClass.hpp"
#include "StackClass.hpp"

void Stack::push(int x){
    m.push_back(x);
}

int Stack::pop(){
    int last_element=m[m.size()-1];
    m.pop_back();
    return last_element;
    
}


