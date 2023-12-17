

#ifndef DataClass_hpp
#define DataClass_hpp

#include <stdio.h>
#include"BasicClass.hpp"

class Data: public Basic{
public:
    std::vector<int> m;
    void push(int);
    unsigned long size();
};


#endif /* DataClass_hpp */
