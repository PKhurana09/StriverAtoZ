// Given an array of integers nums, return the second-largest element in the array. If the second-largest element does not exist, return -1.
// Example 1
// Input: nums = [8, 8, 7, 6, 5]
// Output: 7
// Explanation:
// The largest value in nums is 8, the second largest is 7

#include<iostream>
#include<vector>

using namespace std;

int secondLargestElement(vector<int>& nums);

int main(void){
    vector<int> example = {8, 8 , 7, 6, 5};

    cout << "The second largest element: " << secondLargestElement(example) << endl;

    return EXIT_SUCCESS;
}

int secondLargestElement(vector<int>& nums){
    int size = nums.size();
    int le = nums[0];
    int sle = -1;
    for(int i = 0; i != size; ++i){
        if(nums[i] > le){
            sle = le;
            le = nums[i];
        }else{
            if(nums[i] > sle && nums[i] < le){
                sle = nums[i];
            }
        }
    }

    return sle;
}