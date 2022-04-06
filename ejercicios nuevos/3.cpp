#include <iostream>

using namespace std;

int main(){
    long int n = 600851475143;  

    for(long int i = 2; i < n; i++){
        if(n % i == 0){
            n /= i;
        }
    }
    cout << "El mayor factor primo3: " << n<< endl;
}