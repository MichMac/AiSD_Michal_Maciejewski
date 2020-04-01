#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void ASCII(const string & fileName, int array[])
{
    char znak;
    ifstream File;
    File.open(fileName.c_str());
    while (File>>znak)
        array[znak]+=1;
    File.close();
}


int main(int argc, char* argv[]){
    int licznik[127] = {};
    ASCII(argv[1],licznik);
    for (int i=0; i<127; i++)
        cout << (char)i <<":"<<licznik[i] << endl;
    return 0;
}
