
#ifndef ListClass_hpp
#define ListClass_hpp

#include <stdio.h>
#include <iostream>
#include "BasicClass.hpp"
#include "NodeClass.hpp"

class List: public Basic{
public:
    Node* first;
    Node* last;

    List() : first(nullptr), last(nullptr) {};
    
    bool is_empty();
    void push(int val);
    void print();
    int pop();
};

#endif /* ListClass_hpp */
