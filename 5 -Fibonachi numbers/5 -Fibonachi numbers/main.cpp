//Дз5 Числа Фибоначи

#include <iostream>
#include <cstring>
#include <cctype>
#include <cmath>



int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int check_symb(std::string s){
    int check=0;
    for(int i=0; i<s.length(); i++){
        if (not(std::isdigit(s[i]))&&(s[i]!='-')&&(s[i]!='.')&&(s[i]!=',')){
            check++;
        }
    }
    if (check>0){
        return 1;
        }
    return 0;
    }


int main(){
    std::string str;
    while (1){
        std::cout<<"Введите число: "<<std::endl;
        std::cin>>str;
        
        int p=0;
        
        if (check_symb(str)){
            std::cout<<"Вы ввели не число, а строку"<<std::endl;
            p++;
            }
        else{
            float x=stof(str);
            //std::cout<<x<<std::endl;
            p=0;
            if (x<1){
                std::cout<<"Вы ввели число <1"<<std::endl;
                p++;
                }
            if(x>100){
                std::cout<<"Вы ввели число более 100"<<std::endl;
                p++;
                }
            if (std::fmod (x, 1)!=0){
                std::cout<<"Вы ввели нецелое число"<<std::endl;
                p++;
            }
            if(p==0){
                std::cout<<x<<" чисел Фибоначчи: "<<std::endl;
                for (int k=0; k<x; k++){
                    std::cout<<fib(k)<<", ";
                }
                break;
                }
        }
    }
    return 0;
}

