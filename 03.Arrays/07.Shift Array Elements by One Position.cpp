/*
    Program to shift array elements to the right by one position.
    Input:5
    1 2 3 4 5
    Output:
    5 1 2 3 4
*/
#include <iostream>
#include <vector>
using namespace std;

vector<int> shiftRight(const vector<int>& arr) {
    vector<int> ans;
    if (arr.empty()) return ans;

    ans.push_back(arr[arr.size() - 1]); // Add last element to the front
    for (int i = 0; i < arr.size() - 1; i++) {
        ans.push_back(arr[i]);
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> shifted = shiftRight(arr);
    cout << "Array after right shift: ";
    for (int num : shifted) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
