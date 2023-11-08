
#include <iostream>
#include "QueueClass.h"
#include <vector>

void Queue::push(int x){
    m_q.push_back(x);
}

int Queue::pop(){
    int first_element=m_q[0];
//    m_q[0]=m_q.back();
//    m_q.pop_back();
    m_q.erase(m_q.begin());
    return first_element;
    
}
