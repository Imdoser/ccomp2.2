#include <iostream>
using namespace std;

int main(){
    int a = 0;
    int b = 1;
    int suma = 0;
    int Facto = 0;

    while (Facto < 4000000){
        Facto = a + b;
        if (Facto%2 == 0){
            cout << Facto <<endl;
            suma += Facto;
        }
        a = b;
        b = Facto;
    }
    cout << "La suma es: "<< suma <<endl;
    return 0;
}