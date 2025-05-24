/*
    Program to print elements of a 2D matrix in spiral order.
    Input:matrix = {
                    {1, 2, 3},
                    {4, 5, 6},
                    {7, 8, 9}
                   }
    Output:Spiral order: 1 2 3 6 9 8 7 4 5
*/
#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> ans;
    int total = matrix.size() * matrix[0].size();  // Total number of elements
    int sr = 0, sc = 0;                            // Starting row and column
    int er = matrix.size() - 1, ec = matrix[0].size() - 1;  // Ending row and column
    int count = 0;

    while (count < total) {
        // Traverse from left to right
        for (int i = sc; i <= ec && count < total; i++) {
            ans.push_back(matrix[sr][i]);
            count++;
        }
        sr++;

        // Traverse from top to bottom
        for (int i = sr; i <= er && count < total; i++) {
            ans.push_back(matrix[i][ec]);
            count++;
        }
        ec--;

        // Traverse from right to left
        for (int i = ec; i >= sc && count < total; i--) {
            ans.push_back(matrix[er][i]);
            count++;
        }
        er--;

        // Traverse from bottom to top
        for (int i = er; i >= sr && count < total; i--) {
            ans.push_back(matrix[i][sc]);
            count++;
        }
        sc++;
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

    vector<int> result = spiralOrder(matrix);
    cout << "Spiral order: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
