// Дз7 Проверка на четность


#include <iostream>
#include <ctime>
#include<chrono>

// Не используем функции, а сразу действуем в цикле:


int simple_parity(int x){
    if (x%2==0){
        return 1;
    }
    return 0;
}

int binary_parity(int x){
    if ((x & 1)==0 ) {
        return 1;
    }
    return 0;
}

int main() {
    //int x=67;
    //std::cout<<binary_parity(x);
    int N=10000000;
    std::cout<<"Количество вызовов: "<<N<<std::endl;
    
    using namespace std::chrono;

    time_point<high_resolution_clock> start_point1, end_point1; // creating time points
    start_point1 = high_resolution_clock::now(); // storing the starting time point in start
    
    for(int k=1; k<N+1; k++){
        k%2;
    } // function whose performance is to me measured.
     
    end_point1 = high_resolution_clock::now(); //storing the ending time in end
    
    auto start1 = time_point_cast<microseconds>(start_point1).time_since_epoch().count();
    // casting the time point to microseconds and measuring the time since time epoch
    auto end1 = time_point_cast<microseconds>(end_point1).time_since_epoch().count();

    double t1=(end1-start1);
    std::cout<<"Время обычной функции = "<<t1<<" микросекунд"<<std::endl;
    
    
    
    time_point<high_resolution_clock> start_point2, end_point2; // creating time points
    start_point2 = high_resolution_clock::now(); // storing the starting time point in start
    
    for(int i=1; i<N+1; i++){
        i & 0b1;
    } // function whose performance is to me measured.
     
    end_point2 = high_resolution_clock::now(); //storing the ending time in end
    
    auto start2 = time_point_cast<microseconds>(start_point2).time_since_epoch().count();
    // casting the time point to microseconds and measuring the time since time epoch
    auto end2 = time_point_cast<microseconds>(end_point2).time_since_epoch().count();
    
    std::cout<<"Время побитовой функции = "<<(end2-start2)<<" микросекунд"<<std::endl;
    
    double t2=(end2-start2);
    double n=t1/t2;
    std::cout<<"Отношение времен: "<<n<<std::endl;

// Без оптимизации

#pragma optimize ("", off)

    time_point<high_resolution_clock> start_point3, end_point3; // creating time points
    start_point3 = high_resolution_clock::now(); // storing the starting time point in start
    
    for(int k=1; k<N+1; k++){
        k%2;
    } // function whose performance is to me measured.
     
    end_point3 = high_resolution_clock::now(); //storing the ending time in end
    
    auto start3 = time_point_cast<microseconds>(start_point3).time_since_epoch().count();
    // casting the time point to microseconds and measuring the time since time epoch
    auto end3 = time_point_cast<microseconds>(end_point3).time_since_epoch().count();

    double t3=(end3-start3);
    std::cout<<"Время обычной функции = "<<t3<<" микросекунд"<<std::endl;
    
    
    
    time_point<high_resolution_clock> start_point4, end_point4; // creating time points
    start_point4= high_resolution_clock::now(); // storing the starting time point in start
    
    for(int i=1; i<N+1; i++){
        i & 0b1;
    } // function whose performance is to me measured.
     
    end_point4 = high_resolution_clock::now(); //storing the ending time in end
    
    auto start4 = time_point_cast<microseconds>(start_point4).time_since_epoch().count();
    // casting the time point to microseconds and measuring the time since time epoch
    auto end4 = time_point_cast<microseconds>(end_point4).time_since_epoch().count();
    
    std::cout<<"Время побитовой функции = "<<(end4-start4)<<" микросекунд"<<std::endl;
    
    double t4=(end4-start4);
    n=t3/t4;
    std::cout<<"Отношение времен: "<<n<<std::endl;
    return 0;
}

#pragma optimize ("", on)

// Нормальная программа (с функциями)

/*
#include <iostream>
#include <ctime>
#include<chrono>

int simple_parity(int x){
    if (x%2==0){
        return 1;
    }
    return 0;
}

int binary_parity(int x){
    if ((x & 1)==0 ) {
        return 1;
    }
    return 0;
}

int main() {
    //int x=67;
    //std::cout<<binary_parity(x);
    int N=10000000;
    std::cout<<"Количество вызовов: "<<N<<std::endl;
    
    using namespace std::chrono;

    time_point<high_resolution_clock> start_point1, end_point1; // creating time points
    start_point1 = high_resolution_clock::now(); // storing the starting time point in start
    
    for(int k=1; k<N+1; k++){
        simple_parity(k);
    } // function whose performance is to me measured.
     
    end_point1 = high_resolution_clock::now(); //storing the ending time in end
    
    auto start1 = time_point_cast<microseconds>(start_point1).time_since_epoch().count();
    // casting the time point to microseconds and measuring the time since time epoch
    auto end1 = time_point_cast<microseconds>(end_point1).time_since_epoch().count();

    double t1=(end1-start1);
    std::cout<<"Время обычной функции = "<<t1<<" микросекунд"<<std::endl;
    
    
    
    time_point<high_resolution_clock> start_point2, end_point2; // creating time points
    start_point2 = high_resolution_clock::now(); // storing the starting time point in start
    
    for(int i=1; i<N+1; i++){
        binary_parity(i);
    } // function whose performance is to me measured.
     
    end_point2 = high_resolution_clock::now(); //storing the ending time in end
    
    auto start2 = time_point_cast<microseconds>(start_point2).time_since_epoch().count();
    // casting the time point to microseconds and measuring the time since time epoch
    auto end2 = time_point_cast<microseconds>(end_point2).time_since_epoch().count();
    
    std::cout<<"Время побитовой функции = "<<(end2-start2)<<" микросекунд"<<std::endl;
    
    double t2=(end2-start2);
    double n=t2/t1;
    std::cout<<"Отношение времен: "<<n<<std::endl;
    return 0;
}

*/

   // побитовый должен быть быстрее
// Переделать: i&1==0 - четное

    
/*//Другой способ
 int binary_parity(int x){
 if (x & (1 << 0)) {  // в нулевой (считаем справа) бит вписана единица
     return 0;
 }
 return 1;
} */
