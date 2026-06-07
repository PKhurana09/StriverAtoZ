// Given an array nums of n integers, return true if the array nums is sorted in non-decreasing order or else false.
// Example 1
// Input : nums = [1, 2, 3, 4, 5]
// Output : true
// Explanation : For all i (1 <= i <= 4) it holds nums[i] <= nums[i+1], hence it is sorted and we return true.

#include<iostream>
#include<vector>

using namespace std;

bool isSorted(vector<int>& nums);

int main(void){

    return EXIT_SUCCESS;
}

bool isSorted(vector<int>& nums){
    int size = nums.size();

    bool retVal = true;

    for(int i = 0; i != size; ++i){
        if(nums[i] > nums[i + 1]){
            retVal = false;
        }
    }

    return retVal; 
}