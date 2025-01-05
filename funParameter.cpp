#include <iostream>

using namespace std;

int sum(int a, int b)
{
    int s = a + b;
    cout << s;
    // return s; 
    //if you are using return then while calling function u have to function in cout but
    // if you give cout in function then just call function.
}
int main()
{

    // cout<<sum(10,10);
    sum(10, 20);

    return 0;
}