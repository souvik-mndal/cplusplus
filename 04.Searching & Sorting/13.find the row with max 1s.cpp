/*
    Function to perform binary search on a single row.
    It finds the first occurrence of 1 and returns the count of 1s in that row.
*/
#include <iostream>
#include <vector>
using namespace std;

int bs(vector<int> arr) {
    int ans = -1;
    int s = 0, e = arr.size() - 1;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        // Look for first 1 from left
        if (arr[mid] == 1) {
            ans = mid;
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }

    // If at least one 1 is found, return count of 1s in the row
    if (ans != -1) {
        return arr.size() - ans;
    }
    return 0; // No 1s found
}
int rowWithMaxOnes(const vector<vector<int>>& mat) {
    int row = -1;
    int maxi = -1;

    for (int i = 0; i < mat.size(); i++) {
        int val = bs(mat[i]);
        if (val > maxi) {
            maxi = val;
            row = i;
        }
    }

    return row;
}

int main() {
    int r, c;
    cout << "Enter number of rows and columns in binary matrix: ";
    cin >> r >> c;

    vector<vector<int>> mat(r, vector<int>(c));

    cout << "Enter binary matrix (each row must be sorted):\n";
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> mat[i][j];
        }
    }

    int result = rowWithMaxOnes(mat);
    cout << "Row with maximum number of 1s is: " << result << endl;

    return 0;
}
