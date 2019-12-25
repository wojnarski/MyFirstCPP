#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main() {

int suma=0;


    for (int i=0; i<2000000; i++) {

        if(i % 3 == 0){
        suma+=i;
            //cout<<i<<endl;
        }
    }

cout<<suma<<endl;
return 0;

}

