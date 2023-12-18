#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;


int alpha_count_eng(string name_of_file, char search_alpha){
   
        ifstream File(name_of_file);
    // Проверка открытия файла
        if (!File) {
            cerr << "Error opening file." << endl;
        }

        char alpha;
        int k=0;
        bool found = false;
    
        while (alpha=File.get()) {
//            cout<<alpha<<" "<<search_alpha<<endl;
            if (alpha == search_alpha) {
                k++;
                found = true;
            }
            if (File.eof()){
                break;
            }
        }
    
//        if (found) {
//            cout << "Alpha found : " << k << endl;
//        } else {
//            cout << "Alpha not found." << endl;
//        }

        File.close();
    return k;
}
void text_statistics_eng(string name_of_file){
//    Массив для кол-ва букв английского алфавита по-порядку
    vector<int> alphas;
    for (char c='a';c<='z';c++){
        alphas.push_back(alpha_count_eng(name_of_file, c));
    }
    //Учтем заглавные буквы
    // для прохождению по уже заполненному массиву вводим доп.индекс:
    int i=0;
    for (char c='A';c<='Z';c++){
        alphas[i]+=alpha_count_eng(name_of_file, c);
        i++;
    }
//    Вывод результатов:
    cout<<"The number of english letters in the file:"<<endl;
    i=0;
    for (char c='a';c<='z';c++){
        cout<<c<<":  "<<alphas[i]<<endl;
        i++;
    }
}

int main() {
    string name_of_file="/Users/nadezdasoroko/Documents/Ycheba/5_sem/C++/16 - alphabets/16 - alphabets/English_text.txt";
    text_statistics_eng(name_of_file);
    return 0;
}

