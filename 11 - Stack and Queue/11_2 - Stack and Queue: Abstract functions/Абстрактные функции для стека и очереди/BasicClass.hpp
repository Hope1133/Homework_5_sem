#ifndef BasicClass_hpp
#define BasicClass_hpp

#include <stdio.h>
#include"BasicClass.hpp"
#include <vector>

class Basic{
    public:
    std::vector<int> m;
    virtual void push(int)=0;
    virtual int pop()=0;
};

#endif /* BasicClass_hpp */
