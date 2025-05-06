#include <iostream>
using namespace std;

int sum(int a, int b){   // a and b hre are parameters
    int s = a + b;
    return s;
}

int minOfTwo(int a, int b){
    if(a < b){
        return a;
    } else{
        return b;
    }
    
}
int main(){
    cout << sum(10, 53) << endl;  // 10 and 53 are arguments
    cout << sum(7,89) << endl;

    cout << "min of 10 and 20 is: " << minOfTwo(10, 20) << endl;
}