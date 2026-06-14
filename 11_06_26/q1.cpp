// Given an array of integers nums and an integer target. Return the indices(0 - indexed) of two elements in nums such that they add up to target.
// Each input will have exactly one solution, and the same element cannot be used twice. Return the answer in any order.
// Example 1
// Input: nums = [1, 6, 2, 10, 3], target = 7
// Output: [0, 1]
// Explanation:
// nums[0] + nums[1] = 1 + 6 = 7


#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target);

int main(void){
    vector<int> retVal = {1, 6, 2, 10, 3};
    vector<int> help = twoSum(retVal, 7);

    int n = help.size();

    for(int i = 0; i != n; ++i){
        cout << help[i] << " ";
    }

    cout << endl;
    
    return EXIT_SUCCESS;
}

vector<int> twoSum(vector<int>& nums, int target){
    int n = nums.size();
    unordered_map<int, int> help;
    vector<int> retVal;

    for(int i = 0; i != n; ++i){
        int needed = target - nums[i];

        if(help.find(needed) != help.end()){
            retVal.push_back(help[needed]);
            retVal.push_back(i);
        }
        help[nums[i]] = i;
    }

    return retVal;
}