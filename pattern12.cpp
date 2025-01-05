#include <iostream>

using namespace std;

int main(){
    
    int x = 4;
    for(int i = 0; i<x; i++){
        for(int j = 0; j<=i; j++){
            cout<<"*";
        }
        cout<<"       ";

        for(int l=0; l<x-(i+1); l++){
            cout<<" ";
        }
        for(int k=1; k<=i+1; k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}   