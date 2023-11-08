
#include <iostream>
#include "StackClass.h"
#include <vector>

void Stack::push(int x){
    m_st.push_back(x);
}

int Stack::pop(){
    int last_element=m_st[m_st.size()-1];
    m_st.pop_back();
    return last_element;
    
}
