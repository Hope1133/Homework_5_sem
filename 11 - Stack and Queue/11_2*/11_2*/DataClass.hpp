// Hаследование обоих классов от класса, инкапсулирующего вектор с данными, который, в свою очередь, наследуется от интерфейса.

#ifndef DataClass_hpp
#define DataClass_hpp

#include <stdio.h>
#include"BasicClass.hpp"

class Data: public Basic{
public:
    std::vector<int> m;
    void push(int);
};

#endif /* DataClass_hpp */
