// print 1234
//       1234

#include <iostream>

using namespace std;

int main(){
    int x = 4;
    for(int i =1; i<=x; i++){
        int y = 5;
        for(int j =1; j<=y; j++){
            cout<<j<<" ";
            // cout<<"* ";  to print star pattern
        }
        cout<<endl;
    }
    return 0;
}