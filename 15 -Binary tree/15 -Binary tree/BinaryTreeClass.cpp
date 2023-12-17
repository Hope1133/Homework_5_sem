#include "BinaryTreeClass.hpp"

#include <stdio.h>
#include <iostream>

using namespace std;
    
    //Добавление нового узла в дерево
    Node* BinaryTree::put_node(Node* x, int value)
     {
       if (x == nullptr)
       {
         // Создать узел и вернуть его
         Node* p = new Node;
         p->value = value;
         p->count = 1;
         p->left = nullptr;
         p->right = nullptr;
         return p;
       }

       if (value == x->value)
       {
         x->count++;
         return x;
       }

       if (value < x->value)
       {
         x->left = put_node(x->left, value);
         return x;
       }

       if (value > x->value)
       {
         x->right = put_node(x->right, value);
         return x;
       }
        return 0; //на самом деле, сюда не дойдет
    }
    
    // Добавляет элемент в дерево
     void BinaryTree::put(int val)
     {
       // Вызвать рекурсивную функцию
       if (root == nullptr)
         root = put_node(root, val);
       else
         put_node(root, val);
     }
   
    // Отображение дерева в отсортированном виде
    void BinaryTree::show_sorted(Node* x){
      if (x == nullptr) return;
      if (x->left != nullptr)
        show_sorted(x->left);
      cout<< x->value << "  ";
      //cout<< x->value << ":" << x->count << "  ";

      if (x->right != nullptr)
        show_sorted(x->right);
    }

void BinaryTree::search_key(Node* &curr, int val, Node* &parent)
{
    // обход дерева и поиск ключа
    while (curr != nullptr && curr->value != val)
    {
        // обновить родителя до текущего узла
        parent = curr;
 
        // если заданный ключ меньше текущего узла, переходим в левое поддерево;
        // иначе идем в правое поддерево
        if (val < curr->value) {
            curr = curr->left;
        }
        else {
            curr = curr->right;
        }
    }
}

// Функция для удаления узла
void BinaryTree::delete_node(Node*& root, int val)
{
    // указатель для хранения родителя текущего узла
    Node* parent = nullptr;
    // начинаем с корневого узла
    Node* curr = root;
    // поиск ключа и установка его родительского указателя
    search_key(curr, val, parent);
    // возвращаем, если ключ не найден в дереве
    if (curr == nullptr) {
        return;
    }
    // Случай 1: удаляемый узел не имеет дочерних элементов, т. е. является листовым узлом
    if (curr->left == nullptr && curr->right == nullptr)
    {
        // если удаляемый узел не является корневым узлом
        if (curr != root)
        {
            if (parent->left == curr) {
                parent->left = nullptr;
            }
            else {
                parent->right = nullptr;
            }
        }
        // если дерево имеет только корневой узел
        else {
            root = nullptr;
        }
        free(curr);
    }

    // Случай 2: удаляемый узел имеет двух потомков
    else if (curr->left && curr->right)
    {
        // найти его неупорядоченный узел-преемник
        Node* successor;
        // поиск узла минимального значения в поддереве с корнем `p`
        Node* p=curr->right;
        while (p->left != nullptr) {
                p = p->left;
            }
        successor=p;
 
        // сохраняем последующее значение
        int val = successor->value;
 
        // рекурсивно удаляем преемника. Обратите внимание, что преемник
        // будет иметь не более одного потомка (правого потомка)
        delete_node(root, successor->value);
 
        // копируем значение преемника в текущий узел
        curr->value = val;
    }
 
    // Случай 3: удаляемый узел имеет только одного потомка
    else {
        // выбираем дочерний узел
        Node* child = (curr->left)? curr->left: curr->right;
 
        // если удаляемый узел не является корневым узлом, устанавливаем его родителя своему потомку
        if (curr != root)
        {
            if (curr == parent->left) {
                parent->left = child;
            }
            else {
                parent->right = child;
            }
        }
 
        // если удаляемый узел является корневым узлом, то установить корень дочернему
        else {
            root = child;
        }
        free(curr);
    }
}

void BinaryTree::delete_(int val){
    // Вызвать рекурсивную функцию
    if (root == nullptr)
      delete_node(root, val);
    else
      delete_node(root, val);
  }

