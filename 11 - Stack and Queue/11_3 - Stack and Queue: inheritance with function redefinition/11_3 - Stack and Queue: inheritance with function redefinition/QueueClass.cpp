
#include <iostream>
#include "QueueClass.hpp"
#include "StackClass.hpp"
#include <vector>

void Queue::push(int x){
    m_vec.push_back(x);
}

int Queue::pop(){
    int first_element=m_vec[0];
    m_vec.erase(m_vec.begin());
    return first_element;
    
}
