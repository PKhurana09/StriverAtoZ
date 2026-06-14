// Given an array of nums of n integers. Every integer in the array appears twice except one integer. Find the number that appeared once in the array.
// Example 1
// Input : nums = [1, 2, 2, 4, 3, 1, 4]
// Output : 3
// Explanation : The integer 3 has appeared only once.

#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

int singleNumber(vector<int>& nums);

int main(void){
    vector<int> nums = {1, 2, 3, 4, 3, 1, 4};

    cout << singleNumber(nums) << endl;
    return EXIT_SUCCESS;
}

int singleNumber(vector<int>& nums){
    unordered_set<int> retVal;
    int n = nums.size();

    for(int i = 0; i != n; ++i){
        if(retVal.find(nums[i]) == retVal.end()){
            retVal.insert(nums[i]);
        }else{
            retVal.erase(nums[i]);
        }
    }

    return *retVal.begin();
}