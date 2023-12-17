#ifndef FieldClass_hpp
#define FieldClass_hpp

#include <stdio.h>
#include <iostream>
#include <vector>

class Field{
public:
    int m_N=6;
    std::vector<std::vector<int>> m_field;
    std::vector<std::vector<int>> coordinates_heap;
    std::vector<std::vector<int>> coordinates_pit;
    
public:
// Поле квадратное
    Field(){
//                m_field={{0, 9, 1, 0, 0, -1},
//                        {9, 0, 1, 0, 0,  1},
//                       {-1, 0, 1, 0, 9, -1},
//                        {0, 9, 0, 1, 0, -1},
//                        {0, 0, 0, 0, 0,  0},
//                        {0, 0, 0, 0, 0,  0}};
        m_field={{0, 0, 0, 0, 0, 0},
                {0, 0, 0, 0, 0, 0},
                {0, 0, 0, 0, 0, 0},
                {0, 0, 0, 0, 0, 0},
                {0, 0, 0, 0, 0, 0},
                {0, 0, 0, 0, 0, 0}};
    
    };
    void rasst_heaps(std::vector<std::vector<int>> coordinates_heap){
        for (int i=0; i<m_N; i++){
            for (int j=0; j<m_N; j++){
                
            }
        }
    };
    void rasst_pits(std::vector<std::vector<int>> coordinates_pit){
        
    };
    void print(){
        for (int i=0; i<m_N; i++){
            for (int j=0; j<m_N; j++){
                std::cout<<m_field[i][j]<<' ';
            }
            std::cout<<'\n';
        }
    };
            
};

#endif /* FieldClass_hpp */
