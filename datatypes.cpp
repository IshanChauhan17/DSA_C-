#include <iostream>
using namespace std;

int main(){
    // PRIMITIVE DATA TYPE
    
    // int take 4 byte space
    // char take 1 byte space
    // float take 4 byte space
    // bool take 1 byte space
    // double take 8 byte space

    // sizeof tells the size of data type 

    int age = 25;
    char name = 'i';
    float pi = 3.14f;
    bool safe = true;
    
    cout << age << " " << sizeof(age) << endl;
    cout << name << " " << sizeof(name) << endl;
    cout << pi << " " << sizeof(pi) << endl;
    cout << safe << " " << sizeof(safe) << endl;

    return 0;
}