/*
    Program to move all 0's ans 1's
    Input:7
    1 0 1 0 1 0 1
    Output:0 0 0 1 1 1 1
*/
#include <iostream>
#include <vector>
using namespace std;

vector<int> sortArray(vector<int>& nums) {
    int start = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 0) {
            swap(nums[i], nums[start++]);
        }
    }
    return nums;
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

    vector<int> result = sortArray(nums);
    cout << "Sorted array: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
