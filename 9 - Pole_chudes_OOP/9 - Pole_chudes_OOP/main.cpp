#include <iostream>
#include <string>
#include <array>


class Word
{
public:
    std::string m_real;
    std::string m_guess;
    int search_letter_and_open(char letter){
        int N = m_real.length();
        int k=0;
        for (int index = 0; index < N; index++){
            if (m_real[index] == letter){
                m_guess[index]=letter;
                k++;
            }
        }
        return k;
    }
    void set_m_guess(){
        for (int i = 0; i < m_real.length(); i++){
            m_guess[i] = '_';
        }
    }
    void get_m_guess(){
        for (int i = 0; i < m_real.length(); i++){
            std::cout<<m_guess[i];
        }
        std::cout<<'\n';
    }
};

class Game
{
    std::string m_glossary[7]={"willow", "friday", "winter", "autumn", "chess", "theater", "museum"};
    Word m_word;
    public:
    char m_letter;
    
    void start(){
        srand(unsigned(time(0)));
        m_word.m_real=m_glossary[rand()%7];
        m_word.m_guess = m_word.m_real;
//        int N = (m_word.m_real).length();
        m_word.set_m_guess();
        
        std::cout<<"Отгадайте слово: ";
        m_word.get_m_guess();
     }
    
    void guessing(){
        int k;
        while (m_word.m_real != m_word.m_guess){
            std::cout<<"Введите букву: "<<std::endl;
            std::cin>>m_letter;
            k=m_word.search_letter_and_open(m_letter);
            if (k==0){
                    std::cout<<"Нет такой буквы!"<<std::endl;
                    m_word.get_m_guess();
                   // break;
                }
            if (k>0){
                std::cout<<"Угадали!"<<std::endl;
                m_word.get_m_guess();
                k=0;
                //break;
                }
            }
    }
    void end(){
        std::cout<<"Вы угадали слово!"<<std::endl;
        std::cout<<"Конец игры"<<std::endl;
    }
};


int main(){
    Game play;
    play.start();
    play.guessing();
    play.end();
    return 0;
}
