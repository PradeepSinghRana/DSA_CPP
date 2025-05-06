#include <iostream>
using namespace std;

int factorial(int n){
    int fact = 1;

    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r){
    return factorial(n) / (factorial(r) * factorial(n - r));
}


int main(){
    int n = 8, r =2;


    cout << "nCr  of 8 and 2  8C2 is " << nCr(n, r) << endl;
    return 0;
}