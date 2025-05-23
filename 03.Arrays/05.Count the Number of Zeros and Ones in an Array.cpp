/*
    Program to count the number of 0s and 1s in an array.
    Input: 6
    0 1 0 1 0 1
    Output: Zeros: 3 Ones: 3
*/
#include <iostream>
#include <vector>
using namespace std;

pair<int, int> countZerosAndOnes(const vector<int>& nums) {
    int zero = 0, one = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 1) {
            one++;
        } else if (nums[i] == 0) {
            zero++;
        }
    }
    return {zero, one};
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements (0s and 1s only): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    pair<int, int> result = countZerosAndOnes(arr);
    cout << "Zeros: " << result.first << endl;
    cout << "Ones: " << result.second << endl;

    return 0;
}
