//
//  main.cpp
//  8 - chess
//
//  Created by Надежда Сороко on 06.10.2023.
//

#include <iostream>
#include<stdio.h>
#include <array>
#include <string>
#include <iostream>
#include <stdlib.h>
#include <iostream>
#include <cstdlib> // для функций rand() и srand()
#include <ctime> // для функции time()

//Очищение доски
template <typename T, std::size_t Row, std::size_t Col>
void pustay_doska(std::array<std::array<T, Col>, Row> &arr){
    int k=0;
    for (int i=0; i<8; i++){
        for (int j=0; j<8; j++){
            if (k==1){
                arr[i][j]='*';
                k=0;
            }
            else{
                arr[i][j]=' ';
                k=1;
            }
        }
        if (k==1){
            k=0;
        }
        else {
            k=1;
        }
    }
}

//Вывод доски
template <typename T, std::size_t Row, std::size_t Col>
void printArray(std::array<std::array<T, Col>, Row> &arr){
    for (int i=7; i>=0; i--){
        std::cout<<i+1;
        for (int j=0; j<8; j++){
            std::cout<<arr[i][j];
    }
        std::cout<<'\n';
    }
    std::cout<<" abcdefgh\n";
    std::cout<<'\n';
}

//Начальный рандомный разброс фигур
void rand_nachal_polozhenie(int *coord_KLk){
    srand(static_cast<unsigned int>(time(0))); // устанавливаем значение системных часов в качестве стартового числа
    coord_KLk[0]=rand()%8;
    coord_KLk[1]=rand()%8;
    int proverka_vipolnenia_vseh_yslovi = 0;
    while(proverka_vipolnenia_vseh_yslovi <= 1){
        proverka_vipolnenia_vseh_yslovi = 0;
        int rand_coord_vertic=rand()%8;
        int rand_coord_gorizont=rand()%8;
        if (!((rand_coord_vertic==coord_KLk[0])&&(rand_coord_gorizont==coord_KLk[1]))){
            coord_KLk[2]=rand_coord_vertic;
            coord_KLk[3]=rand_coord_gorizont;
            proverka_vipolnenia_vseh_yslovi+=1;
        }
        rand_coord_vertic=rand()%8;
        rand_coord_gorizont=rand()%8;
        if (((rand_coord_vertic!=coord_KLk[2])&&(rand_coord_gorizont!=coord_KLk[3]))&&(abs(coord_KLk[0]- rand_coord_vertic)>1)&&(abs(coord_KLk[1]-rand_coord_gorizont)>1)){
            coord_KLk[4]=rand_coord_vertic;
            coord_KLk[5]=rand_coord_gorizont;
            proverka_vipolnenia_vseh_yslovi+=1;
            //std::cout<<proverka_vipolnenia_vseh_yslovi<<"\n";
        }
        //std::cout<<coord_KLk[0]<<"\n"<<coord_KLk[1]<<"\n"<<coord_KLk[2]<<"\n"<<coord_KLk[3]<<"\n"<<coord_KLk[4]<<"\n"<<coord_KLk[5]<<"\n";
    }
}

//Расставление фигур по заданным координатам
template <typename T, std::size_t Row, std::size_t Col>
void rasstavlenie_figur(std::array<std::array<T, Col>, Row> &arr, int*coord){
    arr[coord[1]][coord[0]]='K';
    arr[coord[3]][coord[2]]='L';
    arr[coord[5]][coord[4]]='k';
}

//Преобразование буквы в координату
int ToCoordinates(char c){
    int col;
    std::string alphabets="abcdefgh";
    for (int i=0; i<8; i++){
        if (c==alphabets[i]){
            col=i;
            break;
        }
    }
    return col;
}

//Преобразование координаты в букву
char ToAlpha(int col){
    char c;
    std::string alphabets="abcdefgh";
    c=alphabets[col];
    return c;
}



//Ход олной фигуры по заданным координатам (координаты в классическом виде h4)
template <typename T, std::size_t Row, std::size_t Col>
void move(char fig, char c, int row, std::array<std::array<T, Col>, Row> &arr, int*coord){
    int col=ToCoordinates(c);
    row-=1;
    if (fig=='K'){
        if ((abs(coord[0]-col)<=1)||(abs(coord[1]-row)<=1)){
            coord[0]=col;
            coord[1]=row;
        }
        else{
            std::cout<<"Ход невозможен"<<std::endl;
        }
    }
    if (fig=='L'){
        if ((coord[2]==col)||(coord[3]==row)){
            coord[2]=col;
            coord[3]=row;
        }
        else{
            std::cout<<"Ход невозможен"<<std::endl;
        }
    }
    if (fig=='k'){
        if ((abs(coord[4]-col)<=1)&&(abs(coord[5]-row)<=1)){
            coord[4]=col;
            coord[5]=row;
        }
        else{
            std::cout<<"Ход невозможен"<<std::endl;
        }

    }
}

//Ход черных
template <typename T, std::size_t Row, std::size_t Col>
void hod_chern(std::array<std::array<T, Col>, Row> &arr, int*coord){
    std::cout<<"Сделайте ваш ход\n";
    std::string hod_chern;
    std::cin>>hod_chern;
    //std::cout<<(hod_chern[2]-'0')<<'\n';                      ///Конвентаризация символа в число!!!!!!!!
    move(hod_chern[0], hod_chern[1], (hod_chern[2]-'0'), arr, coord);
    pustay_doska(arr);
    rasstavlenie_figur(arr, coord);
    printArray(arr);
}

//Ход белых (координаты в массивном виде, например, 01)
template <typename T, std::size_t Row, std::size_t Col>
void hod_bel(char fig, int col, int row, std::array<std::array<T, Col>, Row> &arr, int*coord){
    char c=ToAlpha(col);
    row+=1;
    std::cout<<"Ход белых: "<<fig<<c<<row<<'\n';
    move(fig, c, row, arr, coord);
    pustay_doska(arr);
    rasstavlenie_figur(arr, coord);
    printArray(arr);
}
//                                            Левый верхний угол
//Уменьшение ладьей свободной области короля
template <typename T, std::size_t Row, std::size_t Col>
void nastuplenie_ladya(std::array<std::array<T, Col>, Row> &arr, int*coord){
    if ((coord[0]-coord[4]==1)&&(coord[5]-coord[1]==2)&&(coord[3]=coord[5]-1)){
        hod_bel('L', coord[4]-1, coord[3], arr, coord);
    }
    if ((coord[0]-coord[4]==2)&&(coord[5]-coord[1]==2)&&(coord[3]=coord[5]-1)){
        hod_bel('L', coord[4]-1, coord[3], arr, coord);
    }
    if ((coord[0]-coord[4]==2)&&(coord[5]-coord[1]==1)&&(coord[3]=coord[5]-2)){
        hod_bel('L', coord[2], coord[5]-1, arr, coord);
    }
}
//Защита ладьи белым королем
template <typename T, std::size_t Row, std::size_t Col>
void zachita_korolem(std::array<std::array<T, Col>, Row> &arr, int*coord){
    if ((abs(coord[0]-coord[4])>1)&&(abs(coord[1]-coord[5])>1)){
        if (coord[4]-coord[0]>0){
            if (coord[5]-coord[1]>1){
                hod_bel('K', coord[0]+1, coord[1]+1, arr, coord);
            }
        }
    }
}




int main(){
    std::array<std::array<char, 8>, 8> board;
    pustay_doska(board);
    //printArray(board);
    
    //int *coord_KLk = new int[6];
    //rand_nachal_polozhenie(coord_KLk);
    
    int *coord_KLk = new int[6] {4, 0, 7, 0, 4, 4};
    
    
    rasstavlenie_figur(board, coord_KLk);
    std::cout<<"Начальное положжение фигур:"<<'\n';
    printArray(board);
    
    //std::cout<<coord_KLk[0]<<coord_KLk[1]<<"\n"<<coord_KLk[2]<<coord_KLk[3]<<"\n"<<coord_KLk[4]<<coord_KLk[5]<<"\n";
    
    //Белая ладья ниже черного короля
    if (coord_KLk[3]<=coord_KLk[5]){
        if (abs(coord_KLk[2]-coord_KLk[4])>1){
            hod_bel('L', coord_KLk[2], coord_KLk[5]-1, board, coord_KLk);
            hod_chern(board, coord_KLk);
        }
        if (abs(coord_KLk[2]-coord_KLk[4])<=1){
            
        }
        if ((abs(coord_KLk[2]-coord_KLk[4])<=1)||(abs(coord_KLk[3]-coord_KLk[5])<=1)){
            
        }
        else{
            nastuplenie_ladya(board, coord_KLk);
        }
    }
    //Черная ладья ниже белого короля
    else{
    }
    
    
//    hod_chern(board, coord_KLk);
//    printArray(board);
//    std::cout<<coord_KLk[0]<<coord_KLk[1]<<"\n"<<coord_KLk[2]<<coord_KLk[3]<<"\n"<<coord_KLk[4]<<coord_KLk[5]<<"\n";
//    hod_bel('L', coord_KLk[2], (coord_KLk[5]-1)+1, board, coord_KLk);
//    printArray(board);
//    std::cout<<coord_KLk[0]<<coord_KLk[1]<<"\n"<<coord_KLk[2]<<coord_KLk[3]<<"\n"<<coord_KLk[4]<<coord_KLk[5]<<"\n";
//
    delete[] coord_KLk;
    return 0;
        
}

    


//таблица навимова, рокировка










