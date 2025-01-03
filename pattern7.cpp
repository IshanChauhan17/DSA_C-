#include <iostream>

using namespace std;

int main(){

    // for(int i =5; i>0; i--){
    //     cout<<i;
    // }

    int x = 4;
    for (int i = 0 ; i < x ; i++){
        for(int j = i+1; j>0 ; j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}