/*
    Function to find the single non-duplicate element in a sorted array
    where every other element appears exactly twice.
*/
#include <iostream>
#include <vector>
using namespace std;

int singleNonDuplicate(vector<int>& nums) {
    int s = 0, e = nums.size() - 1;
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;
 
        if (mid % 2 == 1) { 
            if (mid - 1 >= 0 && nums[mid] == nums[mid - 1]) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        } else { 
            if (mid + 1 < nums.size() && nums[mid] == nums[mid + 1]) {
                s = mid + 2;
            } else { 
                ans = nums[mid];
                e = mid - 1;
            }
        }
    }

    return ans;
}

int main() {
    int n;
    cout << "Enter the size of the array (odd number): ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " sorted elements where every element appears twice except one:\n";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int result = singleNonDuplicate(nums);
    cout << "The single non-duplicate element is: " << result << endl;

    return 0;
}
