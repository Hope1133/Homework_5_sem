#include <fstream>
#include <iostream>
#include <string>
#include <stdio.h>
#include "RectlangleClass.h"
#include <vector>


void read_coordinates_from_file(int x_left_up1, int y_left_up1, int x_right_down1, int y_right_down1, int x_left_up2, int y_left_up2, int x_right_down2, int y_right_down2){
// char a1, b1, c1, d1, a2, b2, c2, d2;
// std::string str, line;
//    x_left_up1=0;
//    y_left_up1=0;
//    x_right_down1=0;
//    y_right_down1=0;
//    x_left_up2=0;
//    y_left_up2=0;
//    x_right_down2=0;
//    y_right_down2=0;
//
//
//    std::vector<int> coordinats={x_left_up1, y_left_up1, x_right_down1, y_right_down1, x_left_up2, y_left_up2, x_right_down2, y_right_down2};
//    std::string line;
//
//    // Используем ofstream для чтения
//    std::ofstream outf("Сoordinats.txt");
//
//    if (!outf)
//    {
//    // то выводим сообщение об ошибке и выполняем функцию exit()
//    std::cerr << "Сoordinats.txt could not be opened for writing!" << std::endl;
//    exit(1);
//    }
//
//       if (outf.is_open())
//       {
//           while (getline(outf, line))
//           {
//               std::cout << line << std::endl;
//           }
//       }
//       outf.close();
//
////    outf>>a1>>b1>>c1>>d1>>a2>>b2>>c2>>d2;
//    std::cout<<x_left_up1<< " " <<y_left_up1<< " " <<x_right_down1<< " " <<y_right_down1<< " " <<x_left_up2<< " " <<y_left_up2<< " " <<x_right_down2<< " " <<y_right_down2<< std::endl;
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
}

