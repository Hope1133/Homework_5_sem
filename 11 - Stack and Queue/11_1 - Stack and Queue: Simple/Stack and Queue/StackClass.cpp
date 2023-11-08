
#include <iostream>
#include "StackClass.h"
#include <vector>

void Stack::push(int x){
    m_st.push_back(x);
}

int Stack::pop(){
    int last_element=m_st[m_st.size()-1];
    if (m_st.size()){
        m_st.pop_back();
    }
    else {
        std::cout<<"Невозможно удалить элемент, стэк пуст"<<'\n';
    }
    return last_element;
    
}
