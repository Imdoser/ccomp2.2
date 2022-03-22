# ccomp2.2
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int n1{0};
    int n2 {0};

    cout <<"Ingrese los 2 numeros para comparar ";
    cin >> n1 >> n2;

    if (n1 == n2){
        cout << n1 << " == " << n2 << endl;
    }
    if (n1 != n2){
        cout << n1 << " != " << n2 << endl;    
    }
    if (n1 < n2){
        cout << n1 << " < " << n2 << endl;        
    }
    if (n1 > n2){
        cout << n1 << " > " << n2 << endl;    
    }
    if (n1 <= n2){
        cout << n1 << " <= " << n2 << endl;
    }
    if (n1 >= n2){
        cout << n1 << " >= " << n2 << endl;
    } 
    return 0;
}