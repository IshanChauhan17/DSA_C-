#include <iostream>

using namespace std;

int main(){

    int x = 4;
    for(int i=0; i<x; i++){
        for(int j=0; j<i+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}