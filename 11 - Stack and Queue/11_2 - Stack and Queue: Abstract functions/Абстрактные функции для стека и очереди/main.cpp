#include <iostream>
#include "StackClass.hpp"
#include "QueueClass.hpp"
#include"BasicClass.hpp"

int main() {
    Stack st;
    Queue q;
    q.push(89);
    q.push(676);
    q.push(765);
    q.push(125);
    std::cout<<q.pop()<<std::endl;
    for (int i=0; i<q.m.size(); i++){
        std::cout<<q.m[i]<<' ';
    }
    std::cout<<'\n';
    st.push(57);
    st.push(7654);
    st.push(6543);
    st.push(7654);
    std::cout<<st.pop()<<std::endl;
    for (int i=0; i<st.m.size(); i++){
        std::cout<<st.m[i]<<' ';
    }
    
    return 0;
}
