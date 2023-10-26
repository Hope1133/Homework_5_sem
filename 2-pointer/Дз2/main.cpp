
//  Дз2
//Задание с указателями


#include <iostream>
#include <array>
#include <vector>
#include <memory>

struct mas{
    int number;
};

int main() {
    //(2 способ):
    double **b;

    b=(double**)malloc(sizeof(double*));
    *b=(double*)malloc(sizeof(double));
    **b=2;
    std::cout<<**b<<std::endl;
    free(*b);
    free(b);
    
    //Доп. исследование:
    std::cout<<sizeof(double)<<std::endl;
    std::cout<<sizeof(double*)<<std::endl;
    

    
    //(3 способ):
    double **p = new double *(new double(2));
    std::cout<<**p<<std::endl;
    delete *p;
    delete p;
    return 0;
    }
 
 
 // 1 способ (неправильный способ, т.к. не можем очистить выделенную динамическую память, потеряли связь с ней при присвоении адреса а)
/*
 double **p = 0;

 double a=2;
 double *q= new double;
 //double *q= new double*;
 
 q=&a;
 p=&q;
 std::cout<<**p<<std::endl;
 delete p;
 */



