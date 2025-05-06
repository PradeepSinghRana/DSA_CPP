#include <iostream>
using namespace std;

int sumN(int n){
    int sum = 0;

    for(int i=0; i < n; i++){
        sum+= i;
    } 

    return sum;
}


int main(){

    cout << "sum of strating 10 numbers is " << sumN(10) << endl;
    cout << "sum of starting 5 numbers is " << sumN(5) << endl;
}