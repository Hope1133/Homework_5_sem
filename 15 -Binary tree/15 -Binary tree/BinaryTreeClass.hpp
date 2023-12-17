#ifndef BinaryTreeClass_hpp
#define BinaryTreeClass_hpp

#include <stdio.h>
#include "NodeClass.hpp"

// Дерево бинарного поиска

class BinaryTree{
public:

  Node* root; // корень дерева
  int* A;     // дерево в виде отсортированного массива
  int size;   // размер массива
    
public:
  // Конструктор
  BinaryTree()
  {
    root = nullptr;
  }
    
    //Добавление нового узла в дерево
    Node* put_node(Node* x, int value);
    // Добавляет элемент в дерево
    void put(int value);
    // Отображение дерева в отсортированном виде
    void show_sorted(Node* x);
    void search_key(Node* &curr, int val, Node* &parent);
    // Удаление элемента дерева
    void delete_(int value);
    void delete_node(Node*& root, int val);
};

#endif /* BinaryTreeClass_hpp */
