/*
    Program to find the maximum average of any contiguous subarray of size k.

    Example:
    Input: nums = [1,12,-5,-6,50,3], k = 4
    Output: 12.75
    Explanation: The subarray [12,-5,-6,50] has the maximum average = 51 / 4 = 12.75
*/

#include <iostream>
#include <vector>
#include <limits>
using namespace std;
 
double findMaxAverage(vector<int>& nums, int k) {
    double sum = 0;
 
    for (int i = 0; i < k; i++) {
        sum += nums[i];
    }

    double max_sum = sum;
 
    for (int i = k; i < nums.size(); i++) {
        sum += nums[i] - nums[i - k];  
        max_sum = max(max_sum, sum);
    }
 
    return max_sum / k;
}

int main() {
    int n, k;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter the value of k: ";
    cin >> k;

    double result = findMaxAverage(nums, k);
    cout << "Maximum average of subarrays of length " << k << " is: " << result << endl;

    return 0;
}
