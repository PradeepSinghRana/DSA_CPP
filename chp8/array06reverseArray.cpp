#include <iostream>
using namespace std;

void reverseArray(int arr[], int sz){
    int start = 0, end = sz -1;

    while(start < end){
        swap(arr[start],arr[end]);
        start ++;
        end --;
    }

}

int main(){
    int arr[] ={4, 43, 2, 7,8,40,10,6};
    int sz = 8;

    reverseArray(arr, sz);

    for(int i =0; i < sz; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}