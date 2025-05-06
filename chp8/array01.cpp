#include <iostream>
using namespace std;

int main(){
    int marks[5] = {10, 20, 30, 40, 50};
    int size = 5;

    cout<< marks[0] << endl;
    cout<< marks[1] << endl;
    cout<< marks[2] << endl;
    cout<< marks[3] << endl;
    cout<< marks[4] << endl;

    cout<< "Size of array: " << sizeof(marks) / sizeof(int)<< endl;
    
    // we can also use a loop to print the array elements
    cout << "Using loop to print array elements:" << endl;
    for(int i = 0; i < size; i++){
        cout << marks[i] << endl;
    }
    return 0;
 }