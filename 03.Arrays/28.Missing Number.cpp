/*
    Program to find the missing number in an array containing 
    n distinct numbers taken from 0 to n.

    The approach uses XOR:
    - XOR of all array elements and numbers from 0 to n gives the missing number.

    Example:
    Input: [3, 0, 1]
    Output: 2
*/

#include <iostream>
#include <vector>
using namespace std;
 
int missingNumber(vector<int>& nums) {
    int ans = 0;
  
    for (int i = 0; i < nums.size(); i++) {
        ans ^= nums[i];
    }
 
    for (int i = 0; i <= nums.size(); i++) {
        ans ^= i;
    }

    return ans;
}

int main() {
    int n;
    cout << "Enter the number of elements (n, where input has n elements from 0 to n): ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements (from 0 to n, missing one number): ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int result = missingNumber(nums);
    cout << "The missing number is: " << result << endl;

    return 0;
}
