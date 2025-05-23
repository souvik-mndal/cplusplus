/*
    Program to reverse an array.
    Input: 5
    1 2 3 4 5
    Output: 5 4 3 2 1
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> reverseArray(const vector<int>& arr) {
    vector<int> ans = arr;
    int start = 0;
    int end = ans.size() - 1;
    while (start < end) {
        swap(ans[start++], ans[end--]);
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> reversed = reverseArray(arr);
    cout << "Reversed array: ";
    for (int num : reversed) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
