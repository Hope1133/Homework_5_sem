#include <iostream>
#include "RectlangleClass.h"
#include <fstream>
#include <vector>

Rectlangle::Rectlangle(int x_left_up, int y_left_up, int x_right_down, int y_right_down)
     {
        m_x_left_up=x_left_up;
        m_y_left_up=y_left_up;
        m_x_right_down=x_right_down;
        m_y_right_down=y_right_down;
     }
 

int main(){
    // Мы должны указать как in, так и out, поскольку используем fstream
    std::fstream iofile("Сoordinats.txt", std::ios::in | std::ios::out);
    // Если мы не можем открыть iofile,
    if (!iofile)
    {
    // то выводим сообщение об ошибке и выполняем функцию exit()
    std::cerr << "Uh oh, SomeText.txt could not be opened!" << std::endl;
    exit(1);
    }
    std::string x_left_up_str;
    char chChar;
    
    while (iofile.get(chChar)!=' '){
        x_left_up_str.append(chChar);
    }
}



