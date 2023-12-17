

#ifndef StackClass_h
#define StackClass_h

#include <vector>

class Stack{
public:
    std::vector<int> m_st;
    public:
    void push(int);
    int pop();
    Stack(std::vector<int> x): m_st(x){
        };
    Stack(){
        };

};

#endif /* StackClass_h */

//
//
//#ifndef StackClass_h
//#define StackClass_h
//
//#include <vector>
//#include <stdio.h>
//#include <stdarg.h>
//#include <varargs.h>
//
//
//class Stack{
//public:
//    std::vector<int> m_st;
//    public:
//    void push(int);
//    int pop();
//    Stack(std::vector<int> x): m_st(x){
//    };
//    Stack(){
//    };
//
//    //Вариант с количеством переменных:
//    Stack(int n=-1, ...){
//    va_list factor;         //указатель va_list
//    va_start(factor, n);    // устанавливаем указатель
//    for(int i=0; i<n; i++)
//    {
//        m_st.push_back(va_arg(factor, int));  // получаем значение текущего параметра типа int
//    }
//    va_end(factor); // завершаем обработку параметров
//
//   //     !!!!!!!!!! Функции с неизвестным количеством переменных
////    Stack(int first=-1, ...){
////        if (first!=-1){
////            m_st.push_back(first);
////        }
////        va_list factor;         //указатель va_list
////        va_start(factor, first);    // устанавливаем указатель
////        while(*factor > 0){
////            m_st.push_back(va_arg(factor, int));  // получаем значение текущего параметра типа int
////        }
////        va_end(factor); // завершаем обработку параметров
////    };
////};
//
//#endif /* StackClass_h */
//
