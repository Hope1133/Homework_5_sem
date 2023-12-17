//
//  BasicClass.cpp
//  11_2*
//
//  Created by Надежда Сороко on 17.11.2023.
//

#include "DataClass.hpp"
void Data::push(int x){
    m.push_back(x);
}

unsigned long Data::size(){
    return m.size();
}
