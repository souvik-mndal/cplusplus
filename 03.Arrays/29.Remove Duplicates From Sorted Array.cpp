/*
    Program to remove duplicates from a sorted array in-place.

    The function returns the length of the array after removing duplicates,
    with the unique elements moved to the beginning.

    Input:  [0,0,1,1,1,2,2,3,3,4]
    Output: Length = 5, Array = [0,1,2,3,4,...]
*/

#include <iostream>
#include <vector>
using namespace std;
 
int removeDuplicates(vector<int>& nums) {
    int j = 0;  
 
    for (int i = 1; i < nums.size(); i++) {
        if (nums[j] != nums[i]) {
            // Found a new unique element
            nums[++j] = nums[i];
        }
    } 
    return j + 1;
}

int main() {
    int n;
    cout << "Enter the number of elements (sorted array): ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the sorted elements (can have duplicates): ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int length = removeDuplicates(nums);

    cout << "Length after removing duplicates: " << length << endl;
    cout << "Array with unique elements: ";
    for (int i = 0; i < length; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
