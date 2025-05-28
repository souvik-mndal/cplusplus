/*
    Program to perform Bubble Sort on an array.

    Bubble Sort repeatedly steps through the list, compares adjacent elements
    and swaps them if they are in the wrong order. This process is repeated
    until the list is sorted.

    Example:
    Input: [5, 2, 9, 1, 5, 6]
    Output: [1, 2, 5, 5, 6, 9]
*/

#include <iostream>
#include <vector>
using namespace std;
 
void bubbleSort(vector<int>& ans) {
    for (int i = 0; i < ans.size() - 1; i++) {
        for (int j = 0; j < ans.size() - i - 1; j++) {
            if (ans[j] > ans[j + 1]) {
                swap(ans[j], ans[j + 1]);
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bubbleSort(arr);  

    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
