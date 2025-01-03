#include <iostream>

using namespace std;

int main(){

    // sum of n numbers
    // int n = 5;
    // int count=1,sum=0;
    // while(count<=n){
    //     sum = sum +count;
    //     count++;
    // }
    // cout<<sum;
    // return 0;

    // int n = 10;
    // int sum = 0;
    // for (int count = 1; count<=n; count++){
    //     sum +=count;
    // }
    // cout<<sum;
    // return 0;

    // sum of odd number only 
    // int n = 5;
    // int sum = 0;
    // for (int count = 1; count<=n; count+=2){
    //     sum +=count;
    // }
    // cout<<sum;

    // return 0;

    // print odd number
    // int n = 5;
    // for(int i=1; i<=n; i++){
    //     if (i%2!=0){
    //         cout<<i<<" ";
    //     }
    // }
    // return 0;
    // int n = 5;
    // for(int i=1; i<=n; i+=2){
    //     cout<<i<<" ";
    // }
    // return 0;

    // check whether a number is prime or not 
    // int n = 7;
    // for (int i=2; i<n; i++){
    //     if (n%i==0){
    //         cout<<"Not prime";
    //         break;
    //     } else{
    //         cout<<"prime";
    //         break;
    //     }
    // }
    // return 0;

    // int n = 7;
    // bool isPrime = true;
    // for (int i=2; i<n; i++){
    //     if (n%i==0){
    //         isPrime = false;
    //         break;
    //     } 
    // }
    // if(isPrime==true){
    //     cout<<"prime";
    // }else{
    //     cout<<"not prime";
    // }
    // return 0;

    // great logic for prime number see it again in 3 video of DSA in loops section
    int n = 72;
    bool isPrime = true;
    for (int i=2; i*i<=n; i++){
        if (n%i==0){
            isPrime = false;
            break;
        } 
    }
    if(isPrime==true){
        cout<<"prime";
    }else{
        cout<<"not prime";
    }
    return 0;
}