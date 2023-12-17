#ifndef StackClass_h
#define StackClass_h

#include <vector>

class Stack{
    public:
    std::vector<int> m_vec;
    public:
    virtual void push(int);
    virtual int pop();
    
    Stack(std::vector<int> x): m_vec(x){
    }
    Stack(){
    }
};

#endif /* StackClass_h */

