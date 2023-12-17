//

#include "CRational.hpp"
#include <iostream>

int main(){
    Rational_fraction r1 {3, 4};
    Rational_fraction r2 {2, 10};
    r1.ordinaryPrint();
    r2.ordinaryPrint();
    r2.reduction();
    r2.ordinaryPrint();
    Rational_fraction r3;
    r3=r1+r2;
    r3.ordinaryPrint();
    r3=r1*r2;
    (r3).ordinaryPrint();
    Rational_fraction r {27, 10};
    r.mixPrint();
    Rational_fraction R {2.7};
    R.ordinaryPrint();
}

