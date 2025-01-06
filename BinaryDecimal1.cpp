#include <iostream>

using namespace std;


// decimal to binary conversion
int binDec(int num){
    int ans = 0 ;
    int power = 1;
    
    while(num>0){
       int rem = num % 2;
       num = num /2;

       ans += rem * power;
       power = power * 10;
    }
    return ans;
}

int printall(int num){
    for( int i =1; i<=num; i++){
        cout<<binDec(i)<<endl;
    }
}

int main(){
    
    int num = 10;
    printall(num);

    return 0;
}