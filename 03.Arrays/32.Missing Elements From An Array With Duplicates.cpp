/*
    Program to find all the numbers in the range [1, n] that do not appear in the array.

    The approach marks the indices corresponding to the present numbers by making them negative.

    Example:
    Input: [4,3,2,7,8,2,3,1]
    Output: [5,6]
*/

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
 
vector<int> findDisappearedNumbers(vector<int>& nums) {
    vector<int> ans;
 
    for (int i = 0; i < nums.size(); i++) {
        int index = abs(nums[i]) - 1;
        if (nums[index] > 0) {
            nums[index] *= -1;
        }
    }
 
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > 0) {
            ans.push_back(i + 1);
        }
    }

    return ans;
}

int main() {
    int n;
    cout << "Enter size of the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements (each in range [1, n]): ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> result = findDisappearedNumbers(nums);
    cout << "Disappeared numbers: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
