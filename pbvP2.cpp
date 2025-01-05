#include <iostream>

using namespace std;

// Calculate binomial cofficient i.e nCr = n! / r! (n-r)!

// NOT GOOD WAY 
// int fact(int n, int r){
//     int pro1 = 1;
//     for (int count = 1; count<=n; count++){
//         pro1 = pro1 * count;
//     }
//     int pro2 = 1;
//     for (int count = 1; count<=r; count++){
//         pro2 = pro2 * count;
//     }
//     int pro3 = 1;
//     for (int count = 1; count<=(n-r) or count<=(r-n); count++){
//         pro3 = pro3 * count;
//     }
//     return pro1 / (pro2 * pro3);
// }


// ALSO NOT A GOOD WAY
// int fact(int num){
//     int pro = 1;
//     for (int count =1; count<=num; count++){
//         pro *=count;
//     }
//     return pro;
// }

// int main(){

//     int n = 8;
//     int r = 2;

//     int a = fact(n);
//     int b = fact(r);
//     int c = fact(n-r);

//     cout<< a/ (b*c);

//     return 0;
// }



int fact(int num){
    int pro = 1;
    for (int count =1; count<=num; count++){
        pro *=count;
    }
    return pro;
}

int binomialCoff( int n, int r){
    int fact_n = fact(n);
    int fact_r = fact(r);
    int fact_d = fact(n-r);

    return fact_n / (fact_r * fact_d);
}

int main(){

    
    cout<<binomialCoff(8,2);

    return 0;
}