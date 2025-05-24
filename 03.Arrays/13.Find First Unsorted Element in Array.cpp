/*
    Program to find the first index where the array becomes unsorted.
    Input:6
    1 2 3 7 5 6
    Output:First unsorted index: 3
*/
#include <iostream>
#include <vector>
using namespace std;

int findFirstUnsortedIndex(const vector<int>& arr) {
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < arr[i - 1]) {
            return i - 1;
        }
    }
    return -1; 
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

    int index = findFirstUnsortedIndex(arr);
    if (index == -1) {
        cout << "The array is already sorted." << endl;
    } else {
        cout << "First unsorted index: " << index << endl;
    }

    return 0;
}
