#include <iostream>

using namespace std;

int main(){
    
    int x = 4;
    for(int i=0; i<x; i++){
        for(int j=0; j<x-(i+1); j++){
            cout<<" ";
        }
        for(int k=1; k<=i+1; k++){
            cout<<k;
        }
        for(int l=i; l>=1; l--){
            cout<<l;
        }
        cout<<endl;
    }
    return 0;
}