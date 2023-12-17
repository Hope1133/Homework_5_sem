// Hаследование обоих классов от класса, инкапсулирующего вектор с данными, который, в свою очередь, наследуется от интерфейса.
#ifndef BasicClass_hpp
#define BasicClass_hpp

#include <stdio.h>
#include <vector>

// В интерфейсе (базовом классе) нельзя задавать ничего кроме методов (=0), голые правила, без переменных, без конструкторов

class Basic{
    public:
    virtual void push(int)=0;
    virtual int pop()=0;
};

#endif /* BasicClass_hpp */
