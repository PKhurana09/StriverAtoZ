// Given an integer array nums, rotate the array to the left by one.
// Note: There is no need to return anything, just modify the given array.
// Example 1
// Input: nums = [1, 2, 3, 4, 5]
// Output: [2, 3, 4, 5, 1]
// Explanation:
// Initially, nums = [1, 2, 3, 4, 5]
// Rotating once to left -> nums = [2, 3, 4, 5, 1]

#include<iostream>
#include<vector>

using namespace std;

void rotateArrayByOne(vector<int>& nums);

int main(void){
    vector<int> nums = {1, 2, 3, 4, 5};

    int size = nums.size();

    rotateArrayByOne(nums);

    for(int i = 0; i != size; i++){
        cout << nums[i] << ", ";
    }

    cout << endl;
    
    return EXIT_SUCCESS;
}

void rotateArrayByOne(vector<int>& nums){
    int size = nums.size();
    int formal = nums[0];

    for(int i = 1; i != size; i++){
        nums[i-1] = nums[i];
    }
    nums[size-1] = formal;
}