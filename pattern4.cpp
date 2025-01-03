#include <iostream>

using namespace std;

int main(){

    char ch = 'a';
    int x = 3;
    for(int i=0; i<x; i++){
        int y  = 3;
        for(int j=0; j<y; j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
    
    return 0;
}