#include<iostream>
using namespace std;

int main(){
    int bilangan;

    srand(time(0));

    bilangan = rand() % 10;

    cout << "Bilangan Awal = " << bilangan << endl;
    do
    {
        cout << "Perulangan DO..WHILE" << endl;
        bilangan = rand() % 10;
        cout << "Bilangannya = " << bilangan << endl;

    } while (bilangan >5);

    
}