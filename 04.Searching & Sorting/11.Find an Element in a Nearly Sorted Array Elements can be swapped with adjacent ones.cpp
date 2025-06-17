/*
    Function to search for an element K in a nearly sorted array.
    In a nearly sorted array, the element can be at i, i-1, or i+1 position.
    We modify binary search accordingly.
*/
#include <iostream>
#include <vector>
using namespace std;

int findElementInNearlySortedArray(const vector<int>& arr, int K) {
    int s = 0, e = arr.size() - 1;

    while (s <= e) {
        int mid = s + (e - s) / 2;
\
        if (arr[mid] == K)
            return mid;
\
        if (mid - 1 >= s && arr[mid - 1] == K)
            return mid - 1;

        if (mid + 1 <= e && arr[mid + 1] == K)
            return mid + 1;

        if (arr[mid] < K)
            s = mid + 2;  
        else
            e = mid - 2;  
    }

    return -1; 
}

int main() {
    int n, key;
    cout << "Enter size of the nearly sorted array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements of the array:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    cin >> key;

    int index = findElementInNearlySortedArray(arr, key);

    if (index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found in the array.\n";

    return 0;
}
