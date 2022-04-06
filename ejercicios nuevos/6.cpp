#include <iostream>

using namespace std;

int main()
{
    long long int suma_de_cuadrados = 0;
    long int cuadrado_de_la_suma = 0;

    for (int n = 1; n <= 100; ++n)
    {
        suma_de_cuadrados += (n * n); 
        cuadrado_de_la_suma += n; 
    }
    cuadrado_de_la_suma *= cuadrado_de_la_suma; 

    cout << (cuadrado_de_la_suma - suma_de_cuadrados);
    return 0;
}