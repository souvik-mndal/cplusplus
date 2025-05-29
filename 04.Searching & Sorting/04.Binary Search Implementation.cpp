/*
    Program to perform Binary Search on a sorted array.

    Binary Search works by repeatedly dividing the search interval in half.
    If the value of the search key is less than the item in the middle, narrow the interval to the lower half.
    Otherwise, narrow it to the upper half. Repeat until the value is found or the interval is empty.

    Example:
    Input: [1, 3, 5, 7, 9], Target = 5
    Output: 2 (Index of element 5)
*/

#include <iostream>
#include <vector>
using namespace std;
 
int binarySearch(const vector<int>& arr, int target) {
    int s = 0, e = arr.size() - 1;
    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (arr[mid] == target) {
            return mid;  
        } else if (arr[mid] < target) {
            s = mid + 1;  
        } else {
            e = mid - 1; 
        }
    }
    return -1;  
}

int main() {
    int n, target;
    cout << "Enter number of elements (sorted array): ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " sorted elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter target to search: ";
    cin >> target;

    int index = binarySearch(arr, target);

    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found in the array.\n";
    }

    return 0;
}
