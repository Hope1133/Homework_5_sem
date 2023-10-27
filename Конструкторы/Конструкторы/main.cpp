#include <iostream>


 // Указатели на классы
 class A{
     private:
     int m_a;
     int m_b;
     int m_c;
     public:
     A(int a, int b, int c): m_a(a), m_b(b), m_c(c){
     }
 };
 int main(){
     A a1(1, 2, 3);
     A* a1_ptr=&a1;
     int* k=(int*)a1_ptr;

     std::cout<<k<<'\n';

     std::cout<<*k<<'\n';
     std::cout<<*(k+1)<<'\n';
     std::cout<<*(k+2)<<'\n';
 }
 // Вывод: данные в классе хранятся последовательно
 // Подходит для взлома скрытых данных  int* k=(int*)a1_ptr;  (работает и для private)
