/*
    Problem:
    Search for a target element in a 2D matrix where:
    - Each row is sorted in ascending order
    - The first integer of each row is greater than the last integer of the previous row

    Input:
    matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    }
    target = 3

    Output:
    true
*/

#include <iostream>
#include <vector>
using namespace std;
 
bool searchMatrix(const vector<vector<int>>& matrix, int target) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    int left = 0, right = rows * cols - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        int midElement = matrix[mid / cols][mid % cols];

        if (midElement == target)
            return true;
        else if (midElement < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return false;
}

int main() {
    int m, n, target;
    cout << "Enter the number of rows and columns: ";
    cin >> m >> n;

    vector<vector<int>> matrix(m, vector<int>(n));
    cout << "Enter the matrix elements row by row:\n";
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            cin >> matrix[i][j];

    cout << "Enter the target to search: ";
    cin >> target;

    bool found = searchMatrix(matrix, target);
    cout << (found ? "Target found in matrix." : "Target not found in matrix.") << endl;

    return 0;
}
