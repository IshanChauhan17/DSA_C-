#include <iostream>

using namespace std;

// sum of N numbers
int sumOF(int a){

    int sum = 0;
    for(int count = 1; count<=a; count++){
        sum = sum + count;
    }
    return sum;
}

int main(){

    cout<<sumOF(3);
    
    return 0;
}