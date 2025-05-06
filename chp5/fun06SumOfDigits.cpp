#include <iostream>
using namespace std;

int sumOfDigits(int num){
    int digSum = 0;

    while(num > 0){
        int lastDigit = num % 10; // Get the last digit of the number
        num = num / 10;

        digSum += lastDigit; // Add the last digit to the sum
    }
    return digSum; 
}


int main(){

    cout << "sum of digits of 1234 is: " << sumOfDigits(1234) << endl; // 10
    cout << "sum of digits of 9999 is: " << sumOfDigits(9999) << endl; // 36

    return 0;
}

