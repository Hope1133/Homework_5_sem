#include <unistd.h>
#include <iostream>

#define CSI "\033["
#define reset CSI"0m"

#define BLACK 0
#define RED 1
#define GREEN 2
#define YELLOW 3
#define BLUE 4
#define MAGENTA 5
#define CYAN 6
#define WHITE 7

       
void SetColor(int text, int background){
printf("%s%dm%s",CSI,text+30,background+40?CSI:",reset");
}

int main(){
    using namespace std;
    cout << "\033[32m Green text \033[0m" << endl;

    cout << "\033[1;31m Bright red text \033[0m" << endl;

    cout << "\033[1;32m Bright green text \033[0m" << endl;

    cout << "\033[1;33m Bright yellow text \033[0m" << endl;

    cout << "\033[1;34m Bright blue text \033[0m" << endl;

    cout << "\033[1;35m Bright magenta text \033[0m" << endl;

    cout << "\033[1;36m Bright cyan text \033[0m" << endl;

    cout << "\033[1;37m Bright white text \033[0m" << endl;
}


