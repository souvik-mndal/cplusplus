/*
    Program to find the mode of a list of integers.
    The mode is the number that appears most frequently.
    Input:7
    2 3 2 5 2 3 5
    Output:Mode: 2
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findMode(const vector<int>& arr) {
    vector<int> sortedArr = arr;
    sort(sortedArr.begin(), sortedArr.end());

    int mode = sortedArr[0];
    int count = 1, maxCount = 1;

    for (int i = 1; i < sortedArr.size(); i++) {
        if (sortedArr[i] == sortedArr[i - 1]) {
            count++;
        } else {
            count = 1;
        }

        if (count > maxCount) {
            maxCount = count;
            mode = sortedArr[i];
        }
    }

    return mode;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int mode = findMode(arr);
    cout << "Mode: " << mode << endl;

    return 0;
}
