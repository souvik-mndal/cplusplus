/*
    Program to compute the transpose of a 2D matrix.
    The transpose of a matrix is obtained by flipping it over its diagonal,
    which means converting all rows to columns and vice versa.
    Input:
    matrix = {
        {1, 2, 3},
        {4, 5, 6}
    }
    Output:
    Transposed matrix:
    1 4
    2 5
    3 6
*/

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> transpose(const vector<vector<int>>& matrix) {
    vector<vector<int>> ans(matrix[0].size(), vector<int>(matrix.size(), 0));
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            ans[j][i] = matrix[i][j];
        }
    }

    return ans;
}

int main() {
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;
    vector<vector<int>> matrix(rows, vector<int>(cols));
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
    vector<vector<int>> result = transpose(matrix);
    cout << "Transposed matrix:\n";
    for (const auto& row : result) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
