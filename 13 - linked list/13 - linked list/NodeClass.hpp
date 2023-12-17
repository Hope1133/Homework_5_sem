

#ifndef NodeClass_hpp
#define NodeClass_hpp

#include <stdio.h>
class Node {
public:
    int m_val;
    Node* next;
    
    Node(int val) : m_val(val), next(nullptr) {}
};

#endif /* NodeClass_hpp */
