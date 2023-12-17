#include <stdio.h>
#include <iostream>
#include <vector>
#include "FieldClass.hpp"


int main(){
    Field f;
    std::cout<<f.m_field.size();
    f.print();
    
    return 0;
}
