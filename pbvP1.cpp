#include <iostream>

using namespace std;

// find sum of number
int sumNum(int num)
{
    int sum = 0;
    while (num > 0)
    {
        int lastDigit = num % 10;
        num = num / 10;

        sum = sum + lastDigit;
    }
    return sum;
}
int main()
{

    cout << "sum = "<<sumNum(1252);

    return 0;
}