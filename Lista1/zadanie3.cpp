#include <iostream>
#include <vector>

using namespace std;

double f(double factors[], int n,  double x){
    double result = factors[n];
    for (int i=n-1; i >= 0 ; i--){
        result = result * x + factors[i];
        //cout << "Mnozenie:" << i << " " << result << endl;
        }
    return result;
}

int main(){
    const int n = 4;
    double factors[n] = {3, 5, 6, 7};
    cout << f(factors, n, 2) << endl;

    return 0;
}
