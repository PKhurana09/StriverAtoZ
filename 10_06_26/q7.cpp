// Given an integer array of size n containing distinct values in the range from 0 to n (inclusive), return the only number missing from the array within this range.
// Example 1
// Input: nums = [0, 2, 3, 1, 4]
// Output: 5
// Explanation:
// nums contains 0, 1, 2, 3, 4 thus leaving 5 as the only missing number in the range [0, 5]

#include<iostream>
#include<vector>

using namespace std;

int missingNumber(vector<int>& nums);

int main(void){

    vector<int> nums = {0, 2, 3, 1, 4};

    cout << missingNumber(nums) << endl;

    return EXIT_SUCCESS;
}

int missingNumber(vector<int>& nums){
    int n = nums.size();
    int finalNum = n * (n+1)/2;
    int sum = 0;

    for(int i = 0; i != n; ++i){
        sum = sum + nums[i];
    }
    return finalNum - sum;
}