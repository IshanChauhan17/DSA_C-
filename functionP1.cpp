#include <iostream>

using namespace std;

// min of two number
void minOF(int a, int b){  // number passed in function are called PARAMETERS which are copies of arguments.
    if (a<b){
        cout<<a<<" is minimum.\n";
    }else {
        cout<<b<<" is minimum.\n";
    }
}

// aslo written as 
int min(int a, int b){
    if(a<b){
        return a;
    }else{
        return b;
    }
}

int main(){

    minOF(10,45);  // numbers passed by user inside function are called ARGUMENTS which are actual value pass to function.

    cout<<"min = "<<min(30,23); // it is returning number/value while calling function

    return 0;
}

