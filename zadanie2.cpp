#include <cmath>
#include <iostream>

using namespace std;
double epsilon = 0.001;

double f(double x){
    return x*2*x-2*x-6;
}

double bisection(double a, double b){
    double fa = f(a);
    double fb = f(b);
    double x0;
    if (fa * fb > 0)
        return false;
    while (b-a > epsilon){
        x0 = (a+b)/2;
        if (abs(f(x0)) < epsilon)
            break;
        if (f(a)*f(x0) < 0)
            b = x0;
        else
            a = x0;
    }
    return x0;
}
int main(){
    cout << bisection(0.75, 3.23) << endl;
    cout << bisection(1.5, 10.54) << endl;
    }
