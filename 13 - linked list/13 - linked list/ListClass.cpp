

#include "ListClass.hpp"

bool List::is_empty(){
    return first == nullptr;
}

void List::push_back(int val){
    Node* p = new Node(val);
    if (is_empty()) {
        first = p;
        last = p;
        return;
    }
    last->next = p;
//  (*a).b
//   =
//   a->b
    last = p;
}

int List::pop(){
    int deleting_val;
    Node* p = first; //указывает на рассматриваемый узел p
    Node* before_p = first;//хранит адрес узла, который рассматривали перед p
    if (not(is_empty())) {
        while(true){
            if(p->next==nullptr){
                break;
            }
            before_p = p;
            p = p->next;
            //  (*a).b
            //   =
            //   a->b
        }
        deleting_val = p->m_val;
        last = before_p;
        last->next = nullptr;
        return deleting_val;
    }
    return 0;
}

void List::print(){
    if (is_empty()) return;
    Node* p = first;
    while (p!=nullptr) {    // можно написать просто while (p)
        std::cout << p->m_val << " ";
        p = p->next;
    }
std::cout <<std::endl;
}

