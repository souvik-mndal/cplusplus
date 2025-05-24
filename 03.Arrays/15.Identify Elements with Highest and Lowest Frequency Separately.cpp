/*
    Program to find the element with the highest and lowest frequency using sorting.
    Input:10
    1 2 2 3 3 3 4 4 4 4
    Output:
    Highest frequency element: 4
    Lowest frequency element: 1
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;


pair<int, int> highestAndLowestFrequency(const vector<int>& arr) {
    vector<int> ans = arr;
    sort(ans.begin(), ans.end());

    int num_max = ans[0];
    int num_min = ans[0];
    int count = 1;
    int max_count = 1;
    int min_count = INT_MAX;
    int mini_ele_store = ans[0];

    for (int i = 1; i < ans.size(); i++) {
        mini_ele_store = ans[i];
        if (ans[i] == ans[i - 1]) {
            count++;
        } else {
            if (count < min_count) {
                min_count = count;
                num_min = ans[i - 1];
            }
            if (count > max_count) {
                max_count = count;
                num_max = ans[i - 1];
            }
            count = 1;
        }
    }

    // Check for the last element's frequency
    if (count < min_count) {
        min_count = count;
        num_min = mini_ele_store;
    }
    if (count > max_count) {
        max_count = count;
        num_max = mini_ele_store;
    }

    return {num_max, num_min};
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

    pair<int, int> result = highestAndLowestFrequency(arr);
    cout << "Highest frequency element: " << result.first << endl;
    cout << "Lowest frequency element: " << result.second << endl;

    return 0;
}
