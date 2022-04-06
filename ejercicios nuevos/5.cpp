#include <iostream>
using namespace std;


int mcd(int a, int b){
  while(a != 0){
    int c = a;
    a = b % a;
    b = c;
  }
  return b;
}

int mcm(int a, int b){
  return a * (b / mcd(a,b));
}

// función principal
int main() {
  int L = 20;
  int result = 1;
  for(int i = 2; i <= L; i++ )
    result = mcm(result, i);

  cout << result;
  return 0;
}