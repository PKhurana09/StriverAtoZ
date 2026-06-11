// Given an integer array nums, move all the 0's to the end of the array. The relative order of the other elements must remain the same.
// This must be done in place, without making a copy of the array.
// Example 1
// Input: nums = [0, 1, 4, 0, 5, 2]
// Output: [1, 4, 5, 2, 0, 0]
// Explanation:
// Both the zeroes are moved to the end and the order of the other elements stay the same

#include<iostream>
#include<vector>

using namespace std;

void moveZeroes(vector<int>& nums);

int main(void){
    vector<int> nums = {0, 1, 4, 0, 5, 2};
    int size = nums.size();
    moveZeroes(nums);

    for(int i = 0; i != size; ++i){
        cout << nums[i] << ", ";
    }

    cout << endl;
    return EXIT_SUCCESS;
}

void moveZeroes(vector<int>& nums){
    int s = nums.size();
    int pointer = 0;
    int count = 0;

    for(int i = 0 ; i != s; ++i){
        if(nums[i] != 0){
            nums[pointer] = nums[i];
            ++pointer;
        }
        if(nums[i] == 0){
            ++count;
        }
    }

    for(int i = s - count; i != s; i++){
        nums[i] = 0;
    }
}