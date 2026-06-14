// Given an integer array nums of size n, return the majority element of the array.
// The majority element of an array is an element that appears more than n/2 times in the array. The array is guaranteed to have a majority element.
// Example 1
// Input: nums = [7, 0, 0, 1, 7, 7, 2, 7, 7]
// Output: 7
// Explanation:
// The number 7 appears 5 times in the 9 sized array


#include<iostream>
#include<vector>

using namespace std;

int majorityElement(vector<int>& nums);

int main(void){
    vector<int> retVal = {7, 0, 0, 1, 7, 7, 2, 7, 7};
    cout << majorityElement(retVal);

    return EXIT_SUCCESS;
}

int majorityElement(vector<int>& nums){
    // int n = nums.size();
    int maxElement = 0;
    int count = 0;

    for (int num : nums){
        if(count == 0){
            maxElement = num;
        }

        if(num == maxElement){
            count++;
        }else{
            count--;
        }
    }

    return maxElement;
}