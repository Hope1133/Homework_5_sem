// Унаследовать от разработанного в задаче 12 интерфейса класс связного списка. (Каждый элемент связного списка содержит значение и указатель на его следующий элемент.

#include <iostream>
#include "ListClass.hpp"
#include "NodeClass.hpp"
int main() {
    List l;
    std::cout << l.is_empty() << std::endl;
    l.push_back(3);
    l.push_back(5);
    l.push_back(8);
    std::cout << l.is_empty() << std::endl;
    l.print();
    std::cout <<l.pop()<< std::endl;
    l.print();
    return 0;
}
