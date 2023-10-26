#include <iostream>
#include <string>
#include <array>


class Game
{
    public:
    char letter;
    std::string glossary[];
    char real_word[];
    char guess_word[];
    
    void start(char real_word[]){
       // char real_word[]="wilow";
        int N = sizeof(real_word);
        char letter;
        
        for (int i = 0; i < N-1; ++i){
            guess_word[i] = '_';
        }
        std::cout<<"Отгадайте слово:"<<guess_word<<std::endl;
     }
    
    void guessing(){
        int k=0;
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
    }
    
    void output_of_the_guessed_word(){
        std::cout<<guess_word<<std::endl;
     }

    void reading_the_letter(){

    }
    void end(){
        
    }
};
class Word
{
    std::string real;
    std::string guessed;
    void search_letter_and_open(){
        
    }
}

int main(){
    
    return 0;
}
