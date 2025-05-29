/*
    Program to find the first and last position of a target element in a sorted array.

    Input:
    nums = [5, 7, 7, 8, 8, 10], target = 8

    Output:
    First Occurrence = 3
    Last Occurrence = 4

    Explanation:
    The number 8 occurs from index 3 to 4 in the array.
*/

#include <iostream>
#include <vector>
using namespace std;
 
int firstOccurrence(const vector<int>& arr, int target) {
    int s = 0, e = arr.size() - 1;
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (arr[mid] == target) {
            ans = mid;
            e = mid - 1;  
        } else if (arr[mid] < target) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }

    return ans;
}
 
int lastOccurrence(const vector<int>& arr, int target) {
    int s = 0, e = arr.size() - 1;
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (arr[mid] == target) {
            ans = mid;
            s = mid + 1;   
        } else if (arr[mid] < target) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }

    return ans;
}
 
vector<int> searchRange(const vector<int>& nums, int target) {
    int first = firstOccurrence(nums, target);
    int last = lastOccurrence(nums, target);
    return {first, last};
}

int main() {
    int n, target;
    cout << "Enter number of elements in sorted array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " sorted elements:\n";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    cout << "Enter target value to find: ";
    cin >> target;

    vector<int> result = searchRange(nums, target);
    cout << "First Occurrence = " << result[0] << "\n";
    cout << "Last Occurrence = " << result[1] << "\n";

    return 0;
}
