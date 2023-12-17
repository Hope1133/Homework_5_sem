#ifndef CRational_hpp
#define CRational_hpp

#include <iostream>
#include <stdio.h>
#include <vector>


class Rational_fraction{
public:
    int numerator_m;
    int denominator_m;
    
    Rational_fraction(): numerator_m(1), denominator_m(1){};
    Rational_fraction(int num, int denom): numerator_m(num), denominator_m(denom) {};
    Rational_fraction(float x){
//        int integer=int(x);
//        float a=x-integer;
//        std::vector<int> remains;
//        int k=0;
//        while(a>0){
//            std::cout<<a<<'\n';
//            a*=10;
//            integer=int(a);
//            remains.push_back(integer);
//            k++;
        }
        std::cout<<k<<'\n';
        denominator_m=1;
        for (int i=1; i<=k; i++){
            denominator_m*=10;
        }
        std::cout<<denominator_m;
        int num=0;
        for (int i=0; i<remains.size(); i++){
            num*=10;
            num+=remains[i];
        }
        numerator_m=num+denominator_m*int(x);
        std::cout<<numerator_m;
    }
    
    int is_denom_null(){
        if (denominator_m==0){
            return 1;
        }
        else{
            return 0;
        }
    }
    
    friend const Rational_fraction operator+(const Rational_fraction& left, const Rational_fraction& right){
        return Rational_fraction(left.numerator_m * right.denominator_m + right.numerator_m * left.denominator_m, left.denominator_m * right.denominator_m);
    }
    friend const Rational_fraction operator*(const Rational_fraction& left, const Rational_fraction& right){
        return Rational_fraction(left.numerator_m * right.numerator_m, left.denominator_m * right.denominator_m);
    }
    void ordinaryPrint(){
        std::cout<<numerator_m<<'/'<<denominator_m<<'\n';
    };
    void mixPrint(){
        std::cout<<(numerator_m/denominator_m)<<'+'<<(numerator_m%denominator_m)<<'/'<<denominator_m<<'\n';
    };
    int NOD(int a, int b) {
      if (a % b == 0)
        return b;
      if (b % a == 0)
        return a;
      if (a > b)
        return NOD(a%b, b);
        return NOD(a, b%a);
    }
    void reduction(){
        while(NOD(numerator_m, denominator_m)>1){
            int nod=NOD(numerator_m, denominator_m);
            denominator_m = denominator_m / nod;
            numerator_m = numerator_m / nod;
        }
    };
    
//    mixedPrint()
    
};

#endif /* CRational_hpp */
