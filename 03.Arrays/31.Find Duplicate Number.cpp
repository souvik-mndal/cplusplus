/*
    Program to find a duplicate number in an array of n+1 integers where each integer is in the range [1, n].

    The approach modifies the input array by negating elements to track visited indices.

    Example:
    Input: [1, 3, 4, 2, 2]
    Output: 2
*/

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
 
int findDuplicate(vector<int>& nums) {
    for (int i = 0; i < nums.size(); i++) {
        int index = abs(nums[i]);  
 
        if (nums[index] < 0) {
            return index;
        }
 
        nums[index] *= -1;
    }

    return -1;  
}

int main() {
    int n;
    cout << "Enter the size of array (n+1): ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements (each in range [1, n-1]): ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int result = findDuplicate(nums);
    cout << "Duplicate number is: " << result << endl;

    return 0;
}
