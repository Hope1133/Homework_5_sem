/*#include <iostream>
#include <cstring>
#include <locale.h>
#include <wchar.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

using namespace std;

int main(){

    setlocale(LC_ALL, "ru_RU.UTF-8");
    wchar_t str[100] = L"";
    wchar_t a[100] = L"";
    cout << "Введите слово:" << " " ;
    size_t n = 0;
    wcin  >> str;
    //(str, &n, stdin);
    for ( int i = 0; i < wcslen(str); i++ ){
        a[i]='.';
    }

    wchar_t letter;

    while( wcscmp( str, a) != 0){
        cout << "\nВведите букву:" << " " ;
        letter = getwchar();

        bool found = 0;

        for( int j = 0; j < wcslen(str); j++ ){
            if( str[j] == letter ){
                a[j] = str[j];
                found = 1;
            }
        }

        if (found){
            wcout << "Угадали букву:\n";
        }
        else {
            wcout << "Не угадали:\n";
        }

        wcout << a;
    }
    cout << "\n" << "Вы угадали слово!" << endl;
}*/

#include <iostream>
#include <cstring>
#include <locale.h>
#include <wchar.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

using namespace std;

int main(){

    setlocale(LC_ALL, "ru_RU.UTF-8");
    char str[100] = "";
    char a[100] = "";
    cout << "Введите слово:" << " " ;
    size_t n = 0;
    cin  >> str;
    //(str, &n, stdin);
    for ( int i = 0; i < strlen(str) ; i++ ){
        a[i] = '.';
        //cout << a[i] ;
    }

    for ( int i = 0; i < strlen(str) / 2; i++ ){
        a[i] = '.';
        cout << a[i] ;
    }

    //cout << a;

    char letter1;
    char letter2;
    int i = 0;

    while( strcmp( str, a) != 0){
        cout << "\nВведите букву:" << " " ;
        cin >> letter1;
        cin >> letter2;

        bool found = 0;

        for( int j = 0; j < strlen(str) / 2; j++ ){
            if( str[2 * j] == letter1 && str[2 * j + 1] == letter2 ){
                a[2*j] = str[2*j];
                a[2*j + 1] = str[2*j + 1];
                found = 1;
            }
        }
        
        if (found){
            cout << "Угадали букву:\n";
        }
        else {
            cout << "Не угадали:\n";
        }

        for( int j = 0; j < strlen(a); j++ )
        {
            if(a[j] == '.' && a[j] == a[j + 1])
            {
                j++;
            }
            cout << a[j];
        }
        cout << '\n';
    }
    cout << "\n" << "Вы угадали слово!" << endl;
}

/*
#include <wchar.h>
#include <stdio.h>
#include <locale.h>
 
int main(void){
    wchar_t buf[BUFSIZ];
    
    setlocale(LC_ALL, "ru_RU.UTF-8");
    
    printf("%S: ", L"Имя");
    if ( scanf("%S", buf) != 1 ){
        fprintf(stderr, "%S\n", L"Ошибко!");
        return 1;
    }
    
    printf("%S %S\n", L"Здравствуй, дорогой товарищ", buf);
    
    return 0;
}
*/
