// Given a binary array nums, return the maximum number of consecutive 1s in the array.
// A binary array is an array that contains only 0s and 1s.
// Example 1
// Input: nums = [1, 1, 0, 0, 1, 1, 1, 0]
// Output: 3
// Explanation:
// The maximum consecutive 1s are present from index 4 to index 6, amounting to 3 1s

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums);

int main(void){
    vector<int> nums = {1, 1, 0, 0, 1, 1, 1, 0};

    cout << findMaxConsecutiveOnes(nums) << endl;
    
    return EXIT_SUCCESS;
}

int findMaxConsecutiveOnes(vector<int>& nums){
    int n = nums.size();

    int retVal = 0;
    int count = 0;

    for(int i = 0; i != n; ++i){
        if(nums[i] == 1){
            ++count;
            retVal = max(count, retVal);
        }else{
            count = 0;
        }
    }

    return retVal;
}