// Given an integer array nums of even length consisting of an equal number of positive and negative integers.Return the answer array in such a way that the given conditions are met:
// Every consecutive pair of integers have opposite signs.
// For all integers with the same sign, the order in which they were present in nums is preserved.
// The rearranged array begins with a positive integer.
// Example 1
// Input : nums = [2, 4, 5, -1, -3, -4]
// Output : [2, -1, 4, -3, 5, -4]
// Explanation:
// The positive number 2, 4, 5 maintain their relative positions and -1, -3, -4 maintain their relative positions

#include<iostream>
#include<vector>

using namespace std;

vector<int> rearrangeArray(vector<int>& nums);

int main(void){
    vector<int> numpy = {2, 4, 5, -1, -3, -4};
    vector<int> retVal = rearrangeArray(numpy);
    int n = retVal.size();
    for(int i = 0; i != n; ++i){
        cout << retVal[i] << "," ;
    }

    cout << endl;

    return EXIT_SUCCESS;
}

vector<int> rearrangeArray(vector<int>& nums){
    vector<int> newArray;
    int n = nums.size();
    int pos = 0;
    int neg = 0;
    bool yes = true;

    while(newArray.size() < n){
        if(yes){
            while(pos < n && nums[pos] < 0){
                ++pos;
            }
            newArray.push_back(nums[pos]);
            ++pos;
            yes = false;
        }else{
            while(neg < n && nums[neg] > 0){
                ++neg;
            }
            newArray.push_back(nums[neg]);
            ++neg;
            yes = true;
        }
    }
    return newArray;
}