/*
    Program to find the unique element in an array where every element appears twice except one.
    Input:7
    4 1 2 1 2 4 7
    Output:Unique element: 7
*/
#include <iostream>
#include <vector>
using namespace std;

int findUniqueElement(vector<int>& nums) {
    int ans = 0;
    for (int i = 0; i < nums.size(); i++) {
        ans ^= nums[i];  
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int unique = findUniqueElement(nums);
    cout << "Unique element: " << unique << endl;

    return 0;
}
