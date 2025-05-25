/*
Program to print a matrix in wave form (column-wise).

Description:
This program takes a 2D matrix input from the user and prints its elements in wave form.
In wave form:
- For even-indexed columns, elements are printed from top to bottom.
- For odd-indexed columns, elements are printed from bottom to top.

Sample Input:
Enter number of rows: 3
Enter number of columns: 4
Enter matrix elements row-wise:
1  2  3  4
5  6  7  8
9 10 11 12

Sample Output:
Wave Print of Matrix: 1 5 9 10 6 2 3 7 11 12 8 4
*/

#include <iostream>
#include <vector>
using namespace std;
 
vector<int> wavePrintMatrix(const vector<vector<int>>& matrix, int m, int n) {
    vector<int> ans;

    for (int j = 0; j < n; j++) {
        if (j % 2 == 0) { 
            for (int i = 0; i < m; i++) {
                ans.push_back(matrix[i][j]);
            }
        } else { 
            for (int i = m - 1; i >= 0; i--) {
                ans.push_back(matrix[i][j]);
            }
        }
    }

    return ans;
}

int main() {
    int m, n;
 
    cout << "Enter number of rows: ";
    cin >> m;

    cout << "Enter number of columns: ";
    cin >> n;
 
    if (m <= 0 || n <= 0) {
        cout << "Invalid matrix size." << endl;
        return 1;
    }
 
    vector<vector<int>> matrix(m, vector<int>(n));
    cout << "Enter matrix elements row-wise:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
 
    vector<int> result = wavePrintMatrix(matrix, m, n);
 
    cout << "Wave Print of Matrix: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
