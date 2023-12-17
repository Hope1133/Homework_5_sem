#include <iostream>
#include <fstream>
#include <string>



using namespace std;

int main() {
// Replace "input.txt" with the name of your text file.
    ifstream File("/Users/nadezdasoroko/Documents/Ycheba/5_sem/C++/16 - alphabets/16 - alphabets/English_text.txt");

    if (!File) {
        cerr << "Error opening file." << endl;
        return 1;
    }

    string SearchWord;
    cout << "Enter the word to search: ";
    cin >> SearchWord;

    string word;

    int index = 0;
    bool found = false;

 // reads the file word by word and stores each word.
    while (File >> word) {
        if (word == SearchWord) {
            found = true;
            break;
        }
        index++;
    }
    if (found) {
        cout << "Word found at index: " << index << endl;
    } else {
        cout << "Word not found." << endl;
    }

    File.close();

    return 0;
}

