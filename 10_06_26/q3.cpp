// Given an integer array nums and a non-negative integer k, rotate the array to the left by k steps.
// Example 1
// Input: nums = [1, 2, 3, 4, 5, 6], k = 2
// Output: nums = [3, 4, 5, 6, 1, 2]
// Explanation:
// rotate 1 step to the left: [2, 3, 4, 5, 6, 1]
// rotate 2 steps to the left: [3, 4, 5, 6, 1, 2]

#include<iostream>
#include<vector>

using namespace std;

void rotateArray(vector<int>& nums, int k);
void reverse(vector<int>& nums, int start, int end);

int main(void){

    return EXIT_SUCCESS;
}

void reverse(vector<int>& nums, int start, int end){
    while(start < end){
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
}

void rotateArray(vector<int>& nums, int k){
    int n = nums.size();

    k = k % n;

    reverse(nums, 0, k-1);

    reverse(nums, k, n-1);

    reverse(nums, 0, n-1);
}