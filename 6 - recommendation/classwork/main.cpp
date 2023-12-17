//
//

#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <cstdlib>

int sum_digits (int x){
    int a = x;
    int sum=0;
    while (a>0){
        sum += a%10;
        a = a/10;
    }
    return sum;
}

int to_decimal(int y){
    int res=0;
    int k=0;
    int y1=y;
    while (y1 > 0) {
        k++;
        y1=y1/10;
       }
    while (y>0){
        res+=std::pow(2, k)*(y%10);
        y=y/10;
        k-=1;
        //std::cout<<res<<std::endl;
    }
   return res;
}

int main() {

    
    std::string Name;
    std::string Birthday;

    std::string music[]={"Master of puppets Metallica", "Брошу Pyrokinesis", "Homebody PH1","Червяк Даргомыжский","Russian Ebunny","Enemy Imagine dragons"," Зизазай Огги и тараканы","Valentine Justice","Swimming pools Kendrick Lamar","Night Call Kovinsky","Yesterday The Beatles","Так закалялась сталь Гражданская оборона","За деньги да Инстасамка","Bad habits Ed sheeran"};
    std::string movies[]={"Короткое замыкание", "Трансформеры", "Полночь", "По соображениям совести","Джентльмены","Ван Хельсинг","Операция Ы","Драйв","Большая игра","Игра в имитацию","Всё везде и сразу","Форрест Гамп","Терминал","Не смотрите наверх"};
    std::string actors[]={"Райан Гослинг", "Кристиан Бейл", "Джеки Чан","Эндрю Гарфилд","Леонардо ДиКаприо","Бенедикт Кембербетч","Мэтью Макконахи","Дэвид Линч","Дэниэлл Рэдклифф","Джейк Джиллехолл","Александр Петров","Рональд Рейган","Том Круз","Брэд Питт"};
    std::string actresses[]={"Наталия Крачковская", "Меган Фокс", "Джениффер Лопез","Эмма Стоун","Эмма Уотсон","Кира Найтли","Милла Йовович","Марго Робби","Мерил Стрип","Скарлет Йоханссон","Александра Бортич","Анджелина Джоли","Шарлиз Терон","Ингеборга Дапкунайте"};
    std::string celeb[]={"Дейв Майнстейн", "Иван Зола", "Сергей Мавроди", "Екатерина Гордеева", "Роберт Опенгеймер", "Лионель Месси", "Папич", "Хидэо Кодзима", "Ляйсан Утяшева","Павел Воля","Криштиану Роналду","Борис Бурда","Ким Кардашьян","Клава Кока"};

    std::cout << "Введите имя: ";
    std::cin>>Name;
    std::cout <<"Введите дату рождения: ";
    std::cin>>Birthday;
    std::string d = Birthday.substr(0,2);
    int day = std::stoi(d);
    //std::cout <<day;
    std::string m = Birthday.substr(3,5);
    int month = std::stoi(m);
    std::string y = Birthday.substr(6,10);
    int year = std::stoi(y);
    

    
    double parametr=sum_digits(day)+sum_digits(month)+sum_digits(year);
    parametr = std::pow(parametr, month);
    int numbers[]={0, 11111111, 22222222};
    
    srand(unsigned(time(0)));     //        !!!!!!!!
    parametr += numbers[rand()%3];
    
    
    
    //std::cout<<parametr<<std::endl;
  
    //Множитель, при двоичном умножении на который остаются последние 4 бита:
    int mnozh_4_last_bits =0b1111;

    // double не может быть использован в двоичных операциях, но нам достаточно его конца
    std::string s=std::to_string(parametr);
    //std::cout<<s<<std::endl;
    int point_index;
//    for (int j=0; j<s.length(); j++){
//        if (s[j]=='.'){
//            point_index=j;
//        }
//    }
    point_index=s.length()-7;
    
    // -'0' - это конвертирование символа в число!!!
    
    int parametr_end=(s[point_index-1]-'0')+10*(s[point_index-2]-'0')+100*(s[point_index-3]-'0')+1000*(s[point_index-4]-'0')+10000*(s[point_index-5]-'0')+100000*(s[point_index-6]-'0');
    //std::cout<<parametr_end<<std::endl;
  
   
    
    

    
    int n1;
    n1 = to_decimal(parametr_end & mnozh_4_last_bits);
    parametr_end=parametr_end/10;

    int n2;
    n2 = to_decimal(parametr_end & mnozh_4_last_bits);
    parametr_end=parametr_end/10;

    int n3;
    n3 = to_decimal(parametr_end & mnozh_4_last_bits);
    parametr_end=parametr_end/10;

    int n4;
    n4 = to_decimal(parametr_end & mnozh_4_last_bits);
    parametr_end=parametr_end/10;

    int n5;
    n5 = to_decimal(parametr_end & mnozh_4_last_bits);

//    std::cout<<n1<<std::endl;
//    std::cout<<n2<<std::endl;
//    std::cout<<n3<<std::endl;
//    std::cout<<n4<<std::endl;
//    std::cout<<n5<<std::endl;

    std::cout<<Name<<", ваша рекомендация на сегодня:"<<std::endl;
    std::cout<<music[n1]<<std::endl;
    std::cout<<movies[n2]<<std::endl;
    std::cout<<actors[n3]<<std::endl;
    std::cout<<actresses[n4]<<std::endl;
    std::cout<<celeb[n5]<<std::endl;
    return 0;
}


//биты через остаток от деления на два - 4 раза -> получим в двоичной системе, потом перевести в десятичный

//или побитовый сдвиг <<, >> (целочисленное деление и умножение, но без знака)
// или маска
