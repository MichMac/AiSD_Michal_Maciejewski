#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string.h>

using namespace std;

void sito_erastotenesa(bool primes[], int n){
    primes[0]=primes[1]=false;

    for(int i=2; i*i<=n; i++)
        if(primes[i]==true){
            for(int j=i*i; j<=n; j+=i)
                primes[j]=false;
        }
}
int main()
{
    int n = 100;
    bool primes[n+1] = {};
    memset(primes, true, sizeof(primes));
    sito_erastotenesa(primes,n);

    for(int i=0;i<n;i++){
        if(primes[i]==true)
            cout << i <<endl;
        }
    return 0;
}
