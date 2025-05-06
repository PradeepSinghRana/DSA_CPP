#include <iostream>
using namespace std;

int main(){
    int size = 5;
    int marks[size];

    cout << "Enter " << size << " marks: " << endl;
    for(int i =0; i < size; i++){
        cin >> marks[i];
    }

    cout << "Marks are: " << endl;
    for(int i =0; i < size; i++){
        cout << marks[i] << " ";
    }

    return 0;
    // g++ array02.cpp -o array02 && ./array02
}