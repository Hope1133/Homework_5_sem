
//  Дз1
//  Создание массивов различными способами

#include <iostream>
#include <array>
#include <vector>
#include <memory>

struct mas{
    int number;
};

int main() {
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
    mas m;
    int i;
    m[i].number=i;
    //
    //std::vector<int, 5> array8;
    //
    //std::make_unique<int[]> array9;
    //+make_shared
 return 0;
}



