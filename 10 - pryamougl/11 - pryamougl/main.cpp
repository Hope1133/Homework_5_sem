#include <fstream>
#include <iostream>
#include "RectlangleClass.h"


void read_coordinates_from_file(int x_left_up_str1, int y_left_up1, int x_right_down1, int y_right_down1, int x_left_up_str2, int y_left_up2, int x_right_down2, int y_right_down2){
    // Мы должны указать как in, так и out, поскольку используем fstream
    std::fstream fout("Сoordinats.txt", std::ios::in | std::ios::out);
    fout >>x_left_up_str1>>y_left_up1>>x_right_down1>>y_right_down1>>x_left_up_str2>>y_left_up2>>x_right_down2>>y_right_down2;
}

int main() {
    int x_left_up_str1, y_left_up1, x_right_down1, y_right_down1, x_left_up_str2, y_left_up2, x_right_down2, y_right_down2;
    read_coordinates_from_file(x_left_up_str1, y_left_up1, x_right_down1, y_right_down1, x_left_up_str2, y_left_up2, x_right_down2, y_right_down2);
    
//    Rectlangle first(1, 13, 7, 6);
//    Rectlangle second(2, 7, 9,3);
    Rectlangle first(x_left_up_str1, y_left_up1, x_right_down1, y_right_down1);
    Rectlangle second(x_left_up_str2, y_left_up2, x_right_down2, y_right_down2);
    
    
    if ( (first.x_left_edge() > second.x_right_edge())|| // первый правее второго
        (first.x_right_edge() < second.x_left_edge()) || // первый левее второго
        (first.y_up_edge() < second.y_down_edge())  || // первый ниже второго
        (first.y_down_edge() > second.y_up_edge())){   // первый выше второго
        
        std::cout<<"Не пересекаются"<<'\n';
    } else {
        std::cout<<"Пересекаются"<<'\n';
    }
    std::cout<<x_left_up_str1<<y_left_up1<<x_right_down1<<y_right_down1;
}

