#include <iostream>
#include <string>
using namespace std;

main(){
    int d = 0;
    for(int a = 100; a <=999; a+=1){
        for(int b = 100; b <=999; b+=1){
            string c = to_string(a*b);
            if(c[0]==c[5] && c[1]== c[4] && c[2]==c[3])
                if(a*b>d)
                    d=a*b;
        }
    }
    cout << d;
    return 0;
}