#include <iostream>
using namespace std;

int main(){

    char grade = 'A'; // ascii value of A is 65
    int value = grade;
    cout<< value <<endl;

    double price = 100.90;
    int newPrice = (int)price;
    cout<< newPrice <<" "<<sizeof(newPrice);
    return 0;

}