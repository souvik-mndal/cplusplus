/*
    Program to search for an element in a conceptually infinite sorted array.
    We simulate the infinite array using a class with a get() method that returns INT_MAX 
    if accessed beyond bounds.

    Input:
    Array: [1, 3, 5, 7, 9, 12, 15, 20]
    Target: 12

    Output:
    Target found at index: 5
*/
#include <iostream>
#include <vector>
#include <climits>
using namespace std;


// Simulated Infinite Array
class InfiniteArray {
private:
    vector<int> arr;
public:
    InfiniteArray(const vector<int>& input) : arr(input) {}

    int get(int index) {
        if (index >= arr.size()) return INT_MAX;
        return arr[index];
    }
};

// Binary Search between given range
int binarySearch(InfiniteArray& arr, int start, int end, int target) {
    while (start <= end) {
        int mid = start + (end - start) / 2;
        int val = arr.get(mid);

        if (val == target) return mid;
        else if (val < target) start = mid + 1;
        else end = mid - 1;
    }
    return -1;
}

// Unbounded Search using exponential range extension
int unboundedSearch(InfiniteArray& arr, int target) {
    int low = 0;
    int high = 1;

    // Expand the range exponentially until we exceed or reach the target
    while (arr.get(high) < target) {
        low = high;
        high *= 2;
    }

    return binarySearch(arr, low, high, target);
}

int main() {
    int n, target;
    cout << "Enter the number of sorted elements: ";
    cin >> n;

    vector<int> input(n);
    cout << "Enter the sorted elements: ";
    for (int i = 0; i < n; i++) {
        cin >> input[i];
    }

    cout << "Enter the target element to search: ";
    cin >> target;

    InfiniteArray arr(input);

    int result = unboundedSearch(arr, target);
    if (result != -1)
        cout << "Target found at index: " << result << endl;
    else
        cout << "Target not found." << endl;

    return 0;
}
