
#ifndef QueueClass_h
#define QueueClass_h

#include <vector>
#include <iostream>

class Queue{
public:
    std::vector<int> m_q;
    public:
    void push(int);
    int pop();
};
#endif /* QueueClass_h */

