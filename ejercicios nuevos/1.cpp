#include <iostream>
using namespace std;

int main (){
    int suma = 0;
    for(int i = 0; i< 1000; ++i)
    {
        suma += (i%3 == 0) || (i%5 == 0)?
        i:0;
    }
    std::cout<<"La suma es: " << suma <<endl;
    return 0;
}