// printing alphabetic square

#include <iostream>

using namespace std;

int main(){

    int x = 5;
    for(int i=0; i<x; i++){
        char ch ='A';
        for(int j=0; j<x; j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
    return 0;
}