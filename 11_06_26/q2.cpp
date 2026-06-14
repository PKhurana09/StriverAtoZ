// // Given an array nums consisting of only 0, 1, or 2. Sort the array in non-decreasing order.
// The sorting must be done in-place, without making a copy of the original array.
// Example 1
// Input: nums = [1, 0, 2, 1, 0]
// Output: [0, 0, 1, 1, 2]
// Explanation:
// The nums array in sorted order has 2 zeroes, 2 ones and 1 two

#include<iostream>
#include<vector>

using namespace std;

void sortZeroOneTwo(vector<int>& nums);

int main(void){
    vector<int> nums = {1, 0, 2, 1, 0};

    sortZeroOneTwo(nums);

    int n = nums.size();
    for(int i = 0; i != n; ++i){
        cout << nums[i] << " ";
    }

    cout << endl;
    return EXIT_SUCCESS;
}

void sortZeroOneTwo(vector<int>& nums){
    int n = nums.size();
    int zero = 0;
    int one = 0;
    int two = 0;

    for(int i = 0; i != n; ++i){
        if(nums[i] == 0){
            zero++;
        }else if(nums[i] == 1){
            one++;
        }else{
            two++;
        }
    }

    for(int i = 0; i != zero; ++i){
        nums[i] = 0;
    }

    for(int j = zero; j != zero+one; ++j){
        nums[j] = 1;
    }

    for(int k = zero+one; k != zero+one+two; ++k){
        nums[k] = 2;
    }
}