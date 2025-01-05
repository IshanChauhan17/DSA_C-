#include <iostream>

using namespace std;

// factorial
int fact(int a){
    int pro = 1;
    for(int count = 1; count<=a; count++){
        pro *=count;
    }
    return pro;
}


void factori(int b){
    int product = 1;
    for(int count = 1; count<=b; count++){
        product *=count;
    }
    cout<<product<<endl;
}

int main(){
    
    cout<<fact(5)<<endl; // By using int and return

    factori(5); // By using void and cout in function

    return 0;
}