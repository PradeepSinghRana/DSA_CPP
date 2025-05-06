#include <iostream>
using namespace std;

int main(){

    int n =5;

    for(int i=1; i<=n; i++){   //outer loop for number of rows

        for(int j=0; j<=n; j++){    //inner loop for number in a particular row
            cout << j;
        }

        cout << endl;
    }

    return 0;
}
