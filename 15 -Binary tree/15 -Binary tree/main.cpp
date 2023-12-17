#include <iostream>
#include "BinaryTreeClass.hpp"

int main(){
    BinaryTree Tr;
    Tr.put(3);
    Tr.put(6);
    Tr.put(1);
    Tr.put(8);
    Tr.put(9);
    Tr.put(4);
    Tr.show_sorted(Tr.root);
    std::cout<<'\n';
    Tr.delete_(4);
    Tr.show_sorted(Tr.root);
}
