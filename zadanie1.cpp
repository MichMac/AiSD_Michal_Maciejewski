#include <iostream>

using namespace std;

double power_iteration(int x, int n){
    double result = 1;
    if (n<0) return 1/power_iteration(x,-n);
    while (n > 0){
        if (n%2 == 0){
            x = x*x;
            n = n/2;
        }
        else{
            result = result*x;
            n--;
        }
    }
    return result;
}

double power_recursion(int x, int n){
    if (n<0) return 1/power_recursion(x,-n);
    else if (n==0) return 1;
    else if (n==1) return x;
    else if (n%2==0) return power_recursion(x*x,n/2);
    else if (n%2==1) return x*power_recursion(x*x, (n-1)/2);
}


int main(){
    cout << "Iteracyjnie - Rekurencyjnie" << endl;
    cout << power_iteration(3,7) << " - " << power_recursion(3,7) << endl;
    cout << power_iteration(2,5) << " - " << power_recursion(2,5) << endl;
    cout << power_iteration(-4,6) << " - " << power_recursion(-4,6) << endl;

    return 0;
}
