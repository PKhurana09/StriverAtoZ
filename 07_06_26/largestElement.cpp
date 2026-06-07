// Given an array of integers nums, return the value of the largest element in the array
// Example array 
// [3, 3, 6, 1]
// Output: 6


#include<iostream>
#include<vector>

using namespace std;

int largestElement(vector<int>& nums);

int main(void){
    vector<int> num = {3, 3, 6, 1};

    cout << "The largest element in the given array is: " << largestElement(num) << endl;

    return EXIT_SUCCESS;
}

int largestElement(vector<int>& nums){
    int size = nums.size();
    int retVal = nums[0];
    for(int i = 1; i != size; ++i){
        if(nums[i] > retVal){
            retVal = nums[i];
        }
    }
    return retVal;
}