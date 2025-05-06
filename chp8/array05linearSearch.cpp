#include <iostream>
using namespace std;

int linearSearch(int arr[], int target, int sz){
    for(int i = 0; i < sz ;i++){
        if(arr[i] == target){
            return i; // return the index of the target
        }
    }

    return -1; // return -1 if not found
}

int main(){
    int arr[] = {1, 2, 53, 54, 2, 654, 3, 4, 5};
    int sz = 9;
    int target = 4;

    cout <<"The target is at index: " << linearSearch(arr, target, sz) << endl;
     return 0;
}