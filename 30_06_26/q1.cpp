// Given an array arr of n integers, where arr[i] represents price of the stock on the ith day. Determine the maximum profit achievable by buying and selling the stock at most once. 
// The stock should be purchased before selling it, and both actions cannot occur on the same day.
// Example 1
// Input: arr = [10, 7, 5, 8, 11, 9]
// Output: 6
// Explanation: Buy on day 3 (price = 5) and sell on day 5 (price = 11), profit = 11 - 5 = 6.

#include<iostream>
#include<vector>

using namespace std;

int stockBuySell(vector<int> arr, int n);

int main(void){
    vector<int> arr = {10, 7, 5, 8, 11, 9};

    int n = arr.size();

    cout << "The maxium profit available is: " << stockBuySell(arr, n);
    
    return EXIT_SUCCESS;
}

int stockBuySell(vector<int> arr, int n){
    int min = arr[0];
    int retVal = 0;

    for(int i = 0; i != n; ++i){
        retVal = max(retVal, arr[i] - min);
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return retVal;
}