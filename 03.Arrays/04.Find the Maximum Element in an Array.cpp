// WAP to find the maximum element in an array.
// Input: 5
// 10 50 30 20 40
// Output: Maximum element: 50

#include <iostream>
#include <vector>
using namespace std;

int findMaximum(vector<int>& arr) {
    int max_element = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > max_element) {
            max_element = arr[i];
        }
    }
    return max_element;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = findMaximum(arr);
    cout << "Maximum element: " << result << endl;

    return 0;
}
