/*
    Program to rotate an array to the right by k steps.
    Input:7
    1 2 3 4 5 6 7
    k:3
    Output:5 6 7 1 2 3 4
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    if (n == 0) return;
    k = k % n; 
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
}

int main() {
    int n, k;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    cout << "Enter the number of rotations (k): ";
    cin >> k;
    rotate(nums, k);
    cout << "Array after rotation: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
}
