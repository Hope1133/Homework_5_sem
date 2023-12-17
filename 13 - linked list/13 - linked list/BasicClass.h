// Унаследовать от разработанного в задаче 12 интерфейса класс связного списка. (Каждый элемент связного списка содержит значение и указатель на его следующий элемент.

#ifndef BasicClass_hpp
#define BasicClass_hpp

#include <stdio.h>
#include <vector>

// В интерфейсе (базовом классе) нельзя задавать ничего кроме методов (=0), голые правила, без переменных, без конструкторов

class Basic{
    public:
    virtual void push_back(int)=0;
    virtual int pop()=0;
};

#endif /* BasicClass_hpp */
