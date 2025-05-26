/*
    Program to find the pivot index in an array.

    A pivot index is an index where the sum of the numbers 
    to the left of the index is equal to the sum of the numbers to the right.

    Example:
    Input: [1, 7, 3, 6, 5, 6]
    Output: 3
    Explanation: Left sum = 1 + 7 + 3 = 11, Right sum = 5 + 6 = 11
*/

#include <iostream>
#include <vector>
using namespace std;
 
int pivotIndex(vector<int>& nums) {
    vector<int> lsum(nums.size(), 0);  
    vector<int> rsum(nums.size(), 0);   
    for (int i = 1; i < nums.size(); i++) {
        lsum[i] = lsum[i - 1] + nums[i - 1];
    }
 
    for (int i = nums.size() - 2; i >= 0; i--) {
        rsum[i] = rsum[i + 1] + nums[i + 1];
    }
 
    for (int i = 0; i < nums.size(); i++) {
        if (lsum[i] == rsum[i]) {
            return i;
        }
    }

    return -1;  
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int index = pivotIndex(nums);

    if (index == -1) {
        cout << "No pivot index found." << endl;
    } else {
        cout << "Pivot index is: " << index << endl;
    }

    return 0;
}
