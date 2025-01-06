#include <iostream>

using namespace std;


// all prime number from 1 to n

int isPrime(int n)
{
    if (n == 1)
        return false;
    for (int count = 2; count * count <= n; count++)
    {
        if (n % count == 0)
        {
            return false;
        }
    }
    return true;
}

void printPrime(int num)
{
    for (int i = 2; i <= num; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{

    printPrime(15);

    return 0;
}