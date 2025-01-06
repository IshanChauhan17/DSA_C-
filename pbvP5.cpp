#include <iostream>

using namespace std;

int fibo(int n){
    int f = 0;
    int s = 1;

    for(int i =1; i<=n; i++){
        cout<<f;

        int next = f +s ;
        f = s;
        s = next;
    }
}

int main(){
    fibo(5);
    return 0;
}