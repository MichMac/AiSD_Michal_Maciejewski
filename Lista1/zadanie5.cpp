#include <iostream>

using namespace std;

struct pairr{
    int min;
    int max;
};

pairr max_min(int array[], int n){
    pairr wynik;
    int i;

    if (n%2 == 0){
        if (array[0]>array[1]){
            wynik.max = array[0];
            wynik.min = array[1];
        }
        else{
            wynik.max = array[1];
            wynik.min = array[0];
        }
        i=2;
    }
    else{
        wynik.min = array[0];
        wynik.max = array[0];
        i=1;
    }

    while (i < n-1){
        if (array[i] >array[i+1]){
            if(array[i] > wynik.max)
                wynik.max = array[i];
            if(array[i+1] < wynik.min)
                wynik.min = array[i+1];
        }
        else{
            if (array[i+1] > wynik.max)
                wynik.max = array[i+1];
            if (array[i] < wynik.min)
                wynik.min = array[i];
        }
        i += 2;
    }
    return wynik;
}

int main(){
    int array[] = {24,2,14,67,35};
    pairr wynik = max_min(array, 4);
    cout << "maksimum: " << wynik.max << endl;
    cout << "minimum: " << wynik.min << endl;
    return 0;
}
