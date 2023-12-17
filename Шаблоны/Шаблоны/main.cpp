
//                                  ШАБЛОНЫ
//Шаблон не делает кода, пока не вызовется нужная функция, причем выбирает только этот тип

#include <iostream>

template <class T>

T min(T& a, T& b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}

//std::string min <std::string>(<std::string> a, <std::string> b){}

int main() {
    std::string s1 = "1 строка";
    std::string s2 = "2 строка";
    std::cout<<(s1>s2);

}
