// Given an array of integers nums and an integer target, find the smallest index (0 based indexing) where the target appears in the array. If the target is not found in the array, return -1
// Example 1
// Input: nums = [2, 3, 4, 5, 3], target = 3
// Output: 1
// Explanation:
// The first occurence of 3 in nums is at index 1
//  Got to know about the break keyword to exit the loop


#include<iostream>
#include<vector>

using namespace std;

int linearSearch(vector<int>& nums, int target);

int main(void){
    vector<int> nums = {2, 3, 4, 5, 3};

    cout << linearSearch(nums, 3) << endl;

    return EXIT_SUCCESS;
}

int linearSearch(vector<int>& nums, int target){
    int retVal = -1;
    int size = nums.size();

    for(int i = 0; i != size; ++i){
        if(nums[i] == target){
            retVal = i;
            break;
        }
    }
    return retVal;
}