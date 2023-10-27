
#include <iostream>
#include "RectlangleClass.h"

int main() {
    Rectlangle first(1, 13, 7, 6);
    Rectlangle second(2, 7, 9,3);
    if ( (first.x_left_edge() > second.x_right_edge())|| // первый правее второго
        (first.x_right_edge() < second.x_left_edge()) || // первый левее второго
        (first.y_up_edge() < second.y_down_edge())  || // первый ниже второго
        (first.y_down_edge() > second.y_up_edge())){   // первый выше второго
        
        std::cout<<"Не пересекаются"<<'\n';
    } else {
        std::cout<<"Пересекаются"<<'\n';
    }
}
