#include <vector>
#include <iostream>
#include"BasicClass.hpp"
#include "StackClass.hpp"

void Stack::push(int x){
    m.push_back(x);
}

int Stack::pop(){
    int last_element=m[m.size()-1];
    if (m.size()){
        m.pop_back();
    }
    else {
        std::cout<<"Невозможно удалить элемент, стэк пуст"<<'\n';
    }
    return last_element;
    
}


