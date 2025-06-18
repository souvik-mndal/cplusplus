#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Binary search in a subrange [s, e]
int binarySearch(const vector<int>& arr, int s, int e, int target) {
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            s = mid + 1;
        else
            e = mid - 1;
    }
    return -1;
}

// Exponential Search
int exponentialSearch(const vector<int>& nums, int target) {
    int n = nums.size();
    if (n == 0)
        return -1;

    if (nums[0] == target)
        return 0;

    int i = 1;
    // Find the range where the target may exist
    while (i < n && nums[i] <= target) {
        i *= 2;
    }

    // Do binary search in found range
    return binarySearch(nums, i / 2, min(i, n - 1), target);
}

// Main function with input/output
int main() {
    int n, target;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter sorted elements: ";
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    cout << "Enter target to search: ";
    cin >> target;

    int result = exponentialSearch(nums, target);
    if (result != -1)
        cout << "Target found at index: " << result << endl;
    else
        cout << "Target not found." << endl;

    return 0;
}
