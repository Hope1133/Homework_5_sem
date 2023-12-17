#include <iostream>
#include "StackClass.h"
#include "QueueClass.h"

//Здесь реализованы разные инициализации Стэка

int main() {
    Stack st;
    Queue q;
    q.push(89);
    q.push(676);
    q.push(765);
    q.push(125);
    std::cout<<q.pop()<<std::endl;
    for (int i=0; i<q.m_q.size(); i++){
        std::cout<<q.m_q[i]<<' ';
    }
    std::cout<<'\n';
    st.push(57);
    st.push(7654);
    st.push(6543);
    st.push(7654);
    std::cout<<st.pop()<<std::endl;
    for (int i=0; i<st.m_st.size(); i++){
        std::cout<<st.m_st[i]<<' ';
    }
    std::cout<<'\n';
    
    std::vector a={1, 2, 3};
    
    Stack st1(a);
    for (int i=0; i<st1.m_st.size(); i++){
        std::cout<<st1.m_st[i]<<' ';
    }
    std::cout<<'\n';
    
    Stack st2 ({1, 2, 3});
    for (int i=0; i<st2.m_st.size(); i++){
        std::cout<<st2.m_st[i]<<' ';
    }
    std::cout<<'\n';
    
//    Stack st3 (3, 1, 2, 3);
//    for (int i=0; i<st3.m_st.size(); i++){
//        std::cout<<st3.m_st[i]<<' ';
//    }
//    std::cout<<'\n';
//    return 0;
}
    

