#include <iostream>

using namespace std;

// PASS BY VALUE : copy of argument is passed to function 
int sumOF(int a){

    a = 2*a;
    return a;
}

int main(){

    int x = 10;       // so here x is pass by value 

    cout<<sumOF(x)<<endl;

    cout<<x;        // original value of x is 10 but when calling using function it get 20 so this is called pass by value
    
    return 0;
}
