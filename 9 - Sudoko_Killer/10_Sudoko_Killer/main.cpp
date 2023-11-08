
#include <string>
#include <iostream>


void array_of_poss_numb(int S, int n, int impossible_numbers[], int possible_numbers[], int len_imp_numb){
     int all_numbers[]={1, 2, 3, 4, 5, 6, 7, 8, 9};
     int k=0;
     int has_forbid_numb;
     for (int i=0; i<9; i++){
         has_forbid_numb=0;
         for(int j=0; j<len_imp_numb; j++){
             if (impossible_numbers[j]==all_numbers[i]){
                 has_forbid_numb++;
             }
         }
         if (has_forbid_numb==0){
             possible_numbers[k]=all_numbers[i];
             k++;
         }
     }
 }
void search(int S, int n, int impossible_numbers[], int len_imp_numb){
    
    int Len_pos_numb=9-len_imp_numb;
//    std::cout<<"len_imp_numb="<<len_imp_numb<<'\n';
//    std::cout<<"Len_pos_numb="<<Len_pos_numb<<'\n';
    
    int possible_numbers[Len_pos_numb];
    array_of_poss_numb(S, n, impossible_numbers, possible_numbers, len_imp_numb);
    
//    for (int i=0; i<Len_pos_numb; i++){
//        std::cout<<possible_numbers[i]<<'\n';
//    }
    int N = Len_pos_numb;
    //для N элементов существует 2^N возможных подмножеств (масок) значением от 0 до 2^N - 1.
    //Можно просто возвести 2 в степень n с помощью битового сдвига: 2^N = 1 << n
    for (int mask = 0; mask < (1 << N); mask++) {
//        std::cout<<mask<<std::endl;
        int sum = 0;
        int count_slag=0;
        for (int i = 0; i < N; i++) {
               // Для получения i-ого бита маски: mask & (1 << i)
               if (mask & (1 << i)) {
                   sum += possible_numbers[i];
                   count_slag++;
//                   std::cout<<sum<<' '<<count_slag<<std::endl;
               }
           }
            if ((sum == S)&(count_slag==n)) {
                for (int i = 0; i < N; i++) {
                    if (mask & (1 << i)) {
                        std::cout<<possible_numbers[i];
                    }
                }
            std::cout<<std::endl;
            }
    }
}


//int main() {
//    int S=15;
//    int n=3;
//    int impossible_numbers[]={6};
//    int poryadok=1;
//    search(S, n, impossible_numbers, poryadok);
//    return 0;
//}




int main() {
    int S;
    int n;
    int vvod_numbers;
    std::string vvod_last_line;
    std::cout<<"Введите сумму:"<<std::endl;
    std::cin>>S;
    std::cout<<"Введите кол-во ячеек:"<<std::endl;
    std::cin>>n;
    std::cin.get();
    std::cout<<"Введите запрещенные числа без разделения:"<<std::endl;
    vvod_last_line=std::cin.get();

    if (vvod_last_line=="\n"){
        int poryadok_=1;
        int impossible_numbers_[]={0};
        search(S, n, impossible_numbers_, poryadok_);
    }
    else{
        vvod_numbers=stof(vvod_last_line);
//        std::cout<<vvod_numbers<<"\n";
        int vv=vvod_numbers;
        int poryadok=0;
        while(vv>0){
            vv=vv/10;
            poryadok++;
        }
//       std::cout<<poryadok<<"\n";
        int impossible_numbers[poryadok];
        for (int i=0; i<poryadok; i++){
            impossible_numbers[i]=vvod_numbers%10;
            vvod_numbers=vvod_numbers/10;
//         std::cout<<impossible_numbers[i]<<"\n";
        }
        search(S, n, impossible_numbers, poryadok);
        }
    return 0;
}




//int main() {
//    int n=10;
//    int possible_numbers[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//    int s=15;
//    //для n элементов существует 2^n возможных подмножеств (масок) значением от 0 до 2^n - 1.
//    //Можно просто возвести 2 в степень n с помощью битового сдвига: 2^n = 1 << n
//    for (int mask = 0; mask < (1 << n); mask++) {
//           int sum = 0;
//           for (int i = 0; i < n; i++) {
//               // Для получения i-ого бита маски: mask & (1 << i)
//               if (mask & (1 << i)) {
//                   sum += possible_numbers[i];
//               }
//           }
//           if (sum == s) {
//               for (int i = 0; i < n; i++) {
//                   if (mask & (1 << i)) {
//                       std::cout<<possible_numbers[i];
//                   }
//           }
//             std::cout<<std::endl;
//           }
//    }
//    return 0;
//}
