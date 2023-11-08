
#include <iostream>
#include "StackClass.hpp"
#include <vector>

void Stack::push(int x){
    m_vec.push_back(x);
}

int Stack::pop(){
    int last_element=m_vec[m_vec.size()-1];
    if (m_vec.size()){
        m_vec.pop_back();
    }
    else {
        std::cout<<"Невозможно удалить элемент, стэк пуст"<<'\n';
    }
    return last_element;
    
}
