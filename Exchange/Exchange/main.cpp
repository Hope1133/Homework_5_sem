#include <iostream>
#include <vector>

// 6 способов поменять значения переменных местами

std::vector<int> f1 (int a, int b){
    int tmp=a;
    a=b;
    b=tmp;
    return {a, b};
}
std::vector<int> f2 (int a, int b){
    a=b+a;
    b=a-b;
    a=a-b;
    return {a, b};
}
std::vector<int> f3 (int a, int b){
    std::vector<int> mas {a, b};
    return {mas[1], mas[0]};
}
std::vector<int> f4 (int a, int b){
    a=(a xor b);
    b=(b xor a);
    a=(a xor b);
    return {a, b};
}


int main(){
    int a=5;
    int b=9;
    std::vector<int> z1=f1(a, b);
    std::cout<<z1[0]<<"  "<<z1[1]<<"\n";
    std::vector<int> z2=f2(a, b);
    std::cout<<z2[0]<<"  "<<z2[1]<<"\n";
    std::vector<int> z3=f3(a, b);
    std::cout<<z3[0]<<"  "<<z3[1]<<"\n";
    std::vector<int> z4=f4(a, b);
    std::cout<<z4[0]<<"  "<<z4[1]<<"\n";
}
