#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Binary Search for target starting from index 's'
int bs(const vector<int>& arr, int s, int target) {
    int e = arr.size() - 1;
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

// Function to count unique k-diff pairs
int findPairs(vector<int>& nums, int k) {
    if (k < 0) return 0;  // absolute difference can't be negative

    sort(nums.begin(), nums.end()); // sort for binary search
    int count = 0;

    for (int i = 0; i < nums.size(); i++) {
        // Skip duplicates to avoid repeated pairs
        if (i > 0 && nums[i] == nums[i - 1])
            continue;

        int index = bs(nums, i + 1, nums[i] + k);
        if (index != -1)
            count++;
    }

    return count;
}

// Main function to take user input and invoke findPairs
int main() {
    int n, k;
    cout << "Enter number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    cout << "Enter the value of k: ";
    cin >> k;

    int result = findPairs(nums, k);
    cout << "Number of unique k-diff pairs: " << result << endl;

    return 0;
}
