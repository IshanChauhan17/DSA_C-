#include <iostream>

using namespace std;

int main()
{
    int x = 4;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x - (i + 1); j++)
        {
            cout << " ";
        }
        cout << "*";

        if (i != 0)
        {
            for (int k = 0; k < 2 * i - 1; k++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    for(int i =0; i<x-1; i++){
        for(int j=0; j<i+1; j++){
            cout<<" ";
        }
        cout<<"*";

        if(i != x-2){
            for(int k=0; k<2*(x-i)-5; k++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}