/*
    Program to find two indices such that their values sum up to a given target.
    Input:nums = [2, 7, 11, 15], target = 9
    Output:Indices: [0, 1]
*/
#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                ans.push_back(i);
                ans.push_back(j);
                break;
            }
        }
        if (!ans.empty()) break;
    }
    return ans;
}

int main() {
    int n, target;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Enter target value: ";
    cin >> target;

    vector<int> result = twoSum(nums, target);

    if (!result.empty()) {
        cout << "Indices: [" << result[0] << ", " << result[1] << "]" << endl;
    } else {
        cout << "No two numbers found that sum up to the target." << endl;
    }

    return 0;
}
