#include <iostream>
using namespace std;

int main(){
    int nums[] = {-20, 4, 56, 32, -15 , 0};
    int size = 6;

    int smallest = INT64_MAX;
    cout << "intmax64 is: " << INT64_MAX << endl;
    for(int i = 0; i < size; i++ ){
        if(nums[i] < smallest){
            smallest = nums[i];}
    }

    cout << "Smallest number is: " << smallest << endl;
    return 0;

}