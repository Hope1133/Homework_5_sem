
#ifndef ListClass_hpp
#define ListClass_hpp

#include <stdio.h>
#include <iostream>
#include "BasicClass.h"
#include "NodeClass.hpp"

class List: public Basic{
    
    Node* first;
    Node* last;
public:
    List() : first(nullptr), last(nullptr) {};
    
    bool is_empty();
    void push_back(int val);
    void print();
    int pop();
};

#endif /* ListClass_hpp */
