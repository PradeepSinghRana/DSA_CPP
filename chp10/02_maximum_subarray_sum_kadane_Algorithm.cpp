#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxSubaarraySum(vector<int> & nums){
    int currSum = 0;
    int maxSum = INT_MIN;

    for(int i = 0; i < nums.size(); i++){
        currSum +=  nums[i];

        if(currSum > maxSum){
            maxSum = currSum;
        }

        if(currSum < 0){
            currSum = 0; // Reset current sum if it becomes negative
        }
    }
    return maxSum;
}

int main(){
    vector<int> nums = {3, -4, 5, 4, -1, 7, -8};
    
    int maxSum = maxSubaarraySum(nums);
    cout << "Maximum Subarray Sum: " << maxSum << endl;
    
    return 0;
}