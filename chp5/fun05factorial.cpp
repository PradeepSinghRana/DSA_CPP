#include <iostream>
using namespace std;

int factorial(int n){
    int factorial =1;

    for(int i=1; i <= n; i++){
        factorial *= i; // factorial = factorial * i;
    } 

    return factorial;
}


int main(){
    int n = 5;
    cout << "factorial of " << n << " is: " << factorial(n) << endl;
    return 0;
}