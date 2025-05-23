// WAP to search for an element in an array and return its index if found, else return -1.
// Input: 5
// 10 20 30 40 50
// target:30
// Output: 2

#include <iostream>
#include <vector>
using namespace std;

int searchElementInArray(vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == target) {
            return i; 
            break;
        }
    }
    return -1; 
}

int main() {
    int n, target;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter target to search: ";
    cin >> target;

    int index = searchElementInArray(nums, target);
    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

}
