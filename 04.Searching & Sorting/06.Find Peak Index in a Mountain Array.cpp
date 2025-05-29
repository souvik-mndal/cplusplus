/*
    Problem: Find the peak index in a mountain array.

    A mountain array increases strictly and then decreases strictly.
    For example:
    Input: arr = [1, 3, 5, 7, 6, 4, 2]
    Output: 3

    Explanation: The peak element is 7 at index 3.
*/

#include <iostream>
#include <vector>
using namespace std;
 
int peakIndexInMountainArray(vector<int>& arr) {
    int s = 0, e = arr.size() - 1;
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;
 
        if ((arr[mid] < arr[mid + 1]) && (mid + 1 < arr.size())) {
            s = mid + 1;
        } else { 
            ans = mid;
            e = mid - 1;
        }
    }

    return ans;
}

int main() {
    int n;
    cout << "Enter number of elements in the mountain array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the mountain array:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int peakIndex = peakIndexInMountainArray(arr);
    cout << "Peak element index: " << peakIndex << "\n";
    cout << "Peak element value: " << arr[peakIndex] << "\n";

    return 0;
}
