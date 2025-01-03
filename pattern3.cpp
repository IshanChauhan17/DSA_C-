// print 123
//       456
//       789

#include <iostream>

using namespace std;

int main(){

    int x = 3;
    int num =1;
    for(int i=0; i<x; i++){
        int y = 3;
        for(int j =0; j<y; j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }

    return 0;
}