#include <iostream>
#include "StackClass.hpp"
#include "QueueClass.hpp"
#include"BasicClass.hpp"
#include <vector>
#include "ListClass.hpp"
#include "NodeClass.hpp"

//template <typename T>// объявление параметра шаблона функции
template <class T>// объявление параметра шаблона функции
const T reverse(const T& sequence){
    std::vector<int> p;
    for (int i=sequence.m.size()-1; i>=0; i--){
        p.push_back(sequence.m[i]);
    }
    return p;
}

void reverse(List sequence){
    Node* p = sequence.first; //указывает на рассматриваемый узел p
    Node* before_p = sequence.first;//хранит адрес узла, который рассматривали перед p
    Node* after_p=p->next;//хранит адрес узла, который рассматривали после p
    
    
    sequence.last=sequence.first;//=p - 1-ый элемент
    after_p = p->next; //2-oй элемент
    p->next=nullptr;

    while(true){
        before_p=p;
        p=after_p;
        after_p = p->next;
        p->next=before_p;
        //  (*a).b
        //   =
        //   a->b
        if(after_p==nullptr){
            sequence.first=p;
            break;
        }
    }
}

int main() {
    std::cout<<"Stack"<<'\n';
    Stack s({1, 2, 3});
    for (int i=0; i<s.m.size(); i++){
        std::cout<<s.m[i]<<' ';
    }
    std::cout<<'\n';
    
    s=reverse(s);
    for (int i=0; i<s.m.size(); i++){
        std::cout<<s.m[i]<<' ';
    }
    std::cout<<'\n';
    
    std::cout<<"Queue"<<'\n';
    Queue q({1, 2, 3});
    for (int i=0; i<q.m.size(); i++){
        std::cout<<q.m[i]<<' ';
    }
    std::cout<<'\n';
    
    q=reverse(q);
    for (int i=0; i<q.m.size(); i++){
        std::cout<<q.m[i]<<' ';
    }
    std::cout<<'\n';
    
    std::cout<<"List"<<'\n';
    List l;
    l.push(1);
    l.push(2);
    l.push(3);
    l.print();
    
    reverse(l);
    l.print();
    std::cout<<'\n';
}

