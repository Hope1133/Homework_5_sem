//  Дз3 "Поле чудес"
// Работает только для английских слов
#include <iostream>
#include <string>
 
int main() {
    
    char real_word[]="wilow";
    int N = sizeof(real_word);
    char guess_word[N];
    char letter;
    int k=0;
    
    for (int i = 0; i < N-1; ++i){
        guess_word[i] = '_';
    }
    
    std::cout<<"Отгадайте слово:"<<guess_word<<std::endl;
    
    while (strcmp(real_word, guess_word)){
        std::cout<<"Введите букву: "<<std::endl;
        std::cin>>letter;
        k=0;
        for (int index = 0; index < N-1; ++index){
            if (real_word[index] == letter){
                guess_word[index]=letter;
                k++;
            }
        }
        if (k==0){
                std::cout<<"Нет такой буквы!"<<std::endl;
                std::cout<<guess_word<<std::endl;
               // break;
            }
        if (k>0){
            std::cout<<"Угадали!"<<std::endl;
            std::cout<<guess_word<<std::endl;
            k=0;
            //break;
            }
        }
    std::cout<<"Вы угадали слово!"<<std::endl;
    return 0;
}


/*Для записи русских букв
 SetConsole CPC(251)
 SetConsole OutputCP(251)
 setlocale(LC_All, "russian")
 
 но это для windows
 нужно найти статью на stack overflow
 */
