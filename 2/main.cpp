#include <iostream>
#include <float.h>

double function(double a){
    return a - 10;
}

double bisection(double a, double b, double e){
    double fa = function(a);
    while(1){
        double x = (a+b)/2;
        if(abs(a - b) < e) return x;
        else if(function(x)*fa > 0) a = x;
        else b = x;
    }

}

int main() {

    double a = 0;
    double b = DBL_MAX;
    double e = 1e-4;

    double x = bisection(a,b,e);
    std::cout << x;
    return 0;
}
