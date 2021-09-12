#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
using std::string;
using std::cout; using std::cin; using std::endl;
using std::sort;

int division_with_remainder (int numerator, int denominator, int& remainder){
    int a = numerator/denominator;
    int b = numerator%denominator;

    remainder = b;

    return a;
}

int main(){
    int remainder;
    cout<<division_with_remainder(3,2,remainder);
    cout<<remainder;
}