/*
    Program to print extreme elements of an array alternately.
    The array is sorted first, and then elements are printed from the start and end alternately.
    Input:6
    7 2 9 4 1 5
    Output:1 9 2 7 4 5
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> printExtremeElementsAlternately(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    int start = 0, end = arr.size() - 1;
    vector<int> ans;

    while (start <= end) {
        if (start == end) {
            ans.push_back(arr[start]);
        } else {
            ans.push_back(arr[start]);
            ans.push_back(arr[end]);
        }
        start++;
        end--;
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    vector<int> result = printExtremeElementsAlternately(arr);

    cout << "Extreme elements alternately: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

}
