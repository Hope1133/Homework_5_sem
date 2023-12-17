

#ifndef StackClass_h
#define StackClass_h

#include <vector>

class Stack{
public:
    std::vector<int> m_st;
    public:
    void push(int);
    int pop();
};

#endif /* StackClass_h */


