// Given an integer array nums sorted in non-decreasing order, remove all duplicates in-place so that each unique element appears only once.
// Return the number of unique elements in the array.
// If the number of unique elements be k, then,
// Change the array nums such that the first k elements of nums contain the unique values in the order that they were present originally.
// The remaining elements, as well as the size of the array does not matter in terms of correctness.
// The driver code will assess correctness by printing and checking only the first k elements of the modified array.
// An array sorted in non-decreasing order is an array where every element to the right of an element is either equal to or greater in value than that element.
// Example 1
// Input: nums = [0, 0, 3, 3, 5, 6]
// Output: 4
// Explanation:
// Resulting array = [0, 3, 5, 6, _, _]
// There are 4 distinct elements in nums and the elements marked as _ can have any value.

#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

int removeDuplicates(vector<int>& nums);

int main(void){
    vector<int> nums = {0, 0, 3, 3, 5, 6};
    // int size = nums.size();

    int retVal = removeDuplicates(nums);

    cout << retVal << endl;

    return EXIT_SUCCESS;
}

int removeDuplicates(vector<int>& nums){
    unordered_set<int> helper;

    int size = nums.size();
    int val = 0;

    for(int i = 0; i != size; i++){
        if(helper.find(nums[i]) == helper.end()){
            helper.insert(nums[i]);
            nums[val] = nums[i];
            val++;
        }
    }
    return helper.size();
}
