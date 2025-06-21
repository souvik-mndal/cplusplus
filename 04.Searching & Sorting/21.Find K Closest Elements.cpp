#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to find the first index where arr[index] >= x
int lowerBound(const vector<int>& arr, int x) {
    int s = 0, e = arr.size() - 1;
    int ans = e;
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] >= x) {
            ans = mid;
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }
    return ans;
}

// Function to find k closest elements to x in arr
vector<int> findClosestElements(const vector<int>& arr, int k, int x) {
    int high = lowerBound(arr, x); // Index of the first element >= x
    int low = high - 1;

    while (k--) {
        if (low < 0) {
            high++;
        } else if (high >= arr.size()) {
            low--;
        } else if (x - arr[low] <= arr[high] - x) {
            low--;
        } else {
            high++;
        }
    }

    return vector<int>(arr.begin() + low + 1, arr.begin() + high);
}

int main() {
    int n, k, x;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter sorted array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter number of closest elements to find (k): ";
    cin >> k;
    cout << "Enter the target value (x): ";
    cin >> x;

    vector<int> result = findClosestElements(arr, k, x);
    cout << "The " << k << " closest elements to " << x << " are:\n";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
