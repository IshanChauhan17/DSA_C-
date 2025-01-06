#include <iostream>

using namespace std;


// decimal to binary conversion
int Decbin(int num){
   int sum = 0;
    int power = 1;
    
    while(num>0){
        int rem = num%10;
        num = num/10;

        sum = sum + (rem * power);
        power = power * 2;
    }
    return sum;
}   

int main(){
    
    int num = 10110;
    cout<<Decbin(num);

    return 0;
}