/*
    Function to find the pivot index in a rotated sorted array.
    A pivot is the index where the next element is smaller than the current.
    For example, in [4,5,6,7,0,1,2], pivot is index 3 (value 7).
*/
#include <iostream>
#include <vector>
using namespace std;

int findPivotIndex(vector<int>& nums) {
    int s = 0, e = nums.size() - 1;

    if (nums[s] < nums[e]) return e;

    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (mid < e && nums[mid] > nums[mid + 1]) {
            return mid;
        }
        if (mid > s && nums[mid] < nums[mid - 1]) {
            return mid - 1;
        }
        if (nums[mid] >= nums[s]) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }

    return -1; 
}

int main() {
    int n;
    cout << "Enter number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements of the rotated sorted array:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int pivotIndex = findPivotIndex(nums);

    if (pivotIndex != -1)
        cout << "Pivot Index: " << pivotIndex << " (Value: " << nums[pivotIndex] << ")" << endl;
    else
        cout << "No pivot found. Array might not be rotated." << endl;

    return 0;
}
