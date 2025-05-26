/*
    Program to find the first repeating element in an array.

    Example:
    Input:
        arr = [1, 2, 3, 4, 2, 5]

    Output:
        2

    Explanation:
        Element '2' appears more than once and is the first such element when scanned from left to right.
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
 
int findFirstRepeatingElement(vector<int>& arr) {
    unordered_map<int, int> hash; 
    for (int i = 0; i < arr.size(); i++) {
        hash[arr[i]]++;
    } 
    for (int i = 0; i < arr.size(); i++) {
        if (hash[arr[i]] > 1) {
            return arr[i];
        }
    } 
    return -1;
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

    int result = findFirstRepeatingElement(arr);

    if (result == -1) {
        cout << "No repeating elements found." << endl;
    } else {
        cout << "First repeating element is: " << result << endl;
    }

    return 0;
}
