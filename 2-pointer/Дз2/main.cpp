
//  Дз2
//Задание с указателями


#include <iostream>
#include <array>
#include <vector>
#include <memory>

struct mas{
    int number;
};

int main() {
    
    // Задание 1
    
    //Фиксированный массив с заданной длиной 5:
    int array1[5];
    //Фиксированный массив с заданными значениями:
    int array2[]={1, 2, 3, 4, 5};
    //Используем оператор new[] для выделения динамического массива заданной длины:
    int *array3 = new int[5];
    delete[] array3;
    //Используем оператор new[] для выделения динамического массива с заданными значениями:
    int *array4 = new int[] {1, 2, 3, 4, 5};
    delete[] array4;
    //через array Класс (стандартная библиотека C++)
    std::array<int, 5> array5;
    //Через динамический массив:
    int *array6;
    int n=5;
    array6=(int*)malloc(n*sizeof(int));
    free(array6);
    //Создание структуры (обертка):
    /*mas m;
    int i;
    m[i].number=i;*/
    //
    //std::vector<int, 5> array8;
    //
    //std::make_unique<int[]> array9;
    //+make_shared


    // Задание 2 (2 способ):
    double **b;

    b=(double**)malloc(sizeof(double*));
    *b=(double*)malloc(sizeof(double));
    **b=2;
    std::cout<<**b<<std::endl;
    free(*b);
    free(b);
    
    //Доп. исследование:
    std::cout<<sizeof(double)<<std::endl;
    std::cout<<sizeof(double*)<<std::endl;
    

    
    // Задание 2 (3 способ):
 double **p = new double *(new double(2));
 std::cout<<**p<<std::endl;
 delete *p;
 delete p;
 
 
 
 // Задание 2 (неправильный способ, т.к. не можем очистить выделенную динамическую память, потеряли связь с ней при присвоении адреса а)
/*
 double **p = 0;

 double a=2;
 double *q= new double;
 //double *q= new double*;
 
 q=&a;
 p=&q;
 std::cout<<**p<<std::endl;
 delete p;
 */
 return 0;
}


