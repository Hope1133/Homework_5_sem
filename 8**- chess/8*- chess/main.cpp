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





int main(){
    std::array<std::array<char, 8>, 8> board;
    pustay_doska(board);
    
    int *coord_KLk = new int[6];
    printArray(board);
    //std::cout<<coord_KLk[0]<<coord_KLk[1]<<"\n"<<coord_KLk[2]<<coord_KLk[3]<<"\n"<<coord_KLk[4]<<coord_KLk[5]<<"\n";
    
//    int rating;
//    for (int K1=5; K1<8; K1++){
//        for (int K2=5; K1<8; K1++){
//            for (int L1=5; K1<8; K1++){
//                for (int L2=5; K1<8; K1++){
//                    for (int k1=5; K1<8; K1++){
//                        for (int k2=5; K1<8; K1++){
//                            coord_KLk = {K1, K2, L1, L2, k1, k2};
//    }
    
    pozicii_matov[]={}
    
    delete[] coord_KLk;
    return 0;
        
}

    










