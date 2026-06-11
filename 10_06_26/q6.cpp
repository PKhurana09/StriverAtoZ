// Given two sorted arrays nums1 and nums2, return an array that contains the union of these two arrays. The elements in the union must be in ascending order.
// The union of two arrays is an array where all values are distinct and are present in either the first array, the second array, or both.
// Example 1
// Input: nums1 = [1, 2, 3, 4, 5], nums2 = [1, 2, 7]
// Output: [1, 2, 3, 4, 5, 7]
// Explanation:
// The elements 1, 2 are common to both, 3, 4, 5 are from nums1 and 7 is from nums2

#include<iostream>
#include<vector>

using namespace std;

vector<int> unionArray(vector<int>& nums1, vector<int>& nums2);

int main(void){

    vector<int> nums1 = {1, 2, 3, 4, 5};
    vector<int> nums2 = {1, 2, 7};

    vector<int> retVal = unionArray(nums1, nums2);

    int size = retVal.size();

    for(int i = 0; i != size; ++i){
        cout << retVal[i] << " ";
    }

    cout << endl;

    return EXIT_SUCCESS;
}

vector<int> unionArray(vector<int>& nums1, vector<int>& nums2){
    int size1 = nums1.size();
    int size2 = nums2.size();

    vector<int> retVal;

    int point1 = 0;
    int point2 = 0;

    while(point1 < size1 && point2 < size2){
        int val;

        if(nums1[point1] < nums2[point2]){
            val = nums1[point1];
            ++point1;
        }else if(nums1[point1] > nums2[point2]){
            val = nums2[point2];
            ++point2;
        }else{
            val = nums1[point1];
            ++point1;
            ++point2;
        }

        if(retVal.empty() || retVal.back() != val){
            retVal.push_back(val);
        }
    }

    while(point1 < size1){
        if(retVal.empty() || retVal.back() != nums1[point1]){
            retVal.push_back(nums1[point1]);
        }
        ++point1;
    }

    while(point2 < size2){
        if(retVal.empty() || retVal.back() != nums2[point2]){
            retVal.push_back(nums2[point2]);
        }
        ++point2;
    }

    return retVal;
}