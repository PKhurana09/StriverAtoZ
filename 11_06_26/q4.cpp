// Given an integer array nums, find the subarray with the largest sum and return the sum of the elements present in that subarray.
// A subarray is a contiguous non-empty sequence of elements within an array.
// Example 1
// Input: nums = [2, 3, 5, -2, 7, -4]
// Output: 15
// Explanation:
// The subarray from index 0 to index 4 has the largest sum = 15

#include<iostream>
#include<vector>

using namespace std;

int maxSubArray(vector<int>& nums);

int main(void){
    vector<int> retVal = {2, 3, 5, -2, 7, -4};

    cout << maxSubArray(retVal) << endl;
    return EXIT_SUCCESS;
}

int maxSubArray(vector<int>& nums){
    int retVal = nums[0];
    int n = nums.size();
    int currSum = 0;

    for(int i = 0; i != n; ++i){
        currSum = currSum + nums[i];

        retVal = max(retVal, currSum);
        if(currSum < 0){
            currSum = 0;
        }
    }
    return retVal;
}