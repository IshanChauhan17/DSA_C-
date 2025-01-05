// if number is prime or not 
// all prime number from 1 to n
// nth fibonacci

#include <iostream>

using namespace std;

bool checkPrime(int n){
    if (n <= 1) return false;
    for (int count = 2; count<n; count++){
        if (n % count == 0){
            return false;
        }
    }
    return true;
}

int main(){

    int number = 1010;
    if (checkPrime(number)){
        cout<<"prime";
    }else{
        cout<<"not prime";
    }
    
    return 0;
}