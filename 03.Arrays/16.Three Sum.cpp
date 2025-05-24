/*
    Program to find all unique triplets in the array which gives the sum of zero.
    Input:-1 0 1 2 -1 -4
    Output:
    [-1, -1, 2]
    [-1, 0, 1]
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;

    for (int i = 0; i < nums.size(); i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue; // Skip duplicates for i

        for (int j = i + 1; j < nums.size(); j++) {
            if (j > i + 1 && nums[j] == nums[j - 1]) continue; // Skip duplicates for j

            for (int k = j + 1; k < nums.size(); k++) {
                if (k > j + 1 && nums[k] == nums[k - 1]) continue; // Skip duplicates for k

                if (nums[i] + nums[j] + nums[k] == 0) {
                    ans.push_back({nums[i], nums[j], nums[k]});
                }
            }
        }
    }

    return ans;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<vector<int>> result = threeSum(nums);

    cout << "Triplets that sum to zero are:" << endl;
    for (auto triplet : result) {
        cout << "[";
        for (int i = 0; i < triplet.size(); i++) {
            cout << triplet[i];
            if (i < triplet.size() - 1) cout << ", ";
        }
        cout << "]" << endl;
    }

    return 0;
}
