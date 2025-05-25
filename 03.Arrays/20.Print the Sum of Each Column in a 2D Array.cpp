#include <iostream>
#include <vector>
using namespace std;

// Function to compute sum of each column in a 2D matrix
vector<int> columnSums(const vector<vector<int>>& matrix) {
    vector<int> ans;
    for (int j = 0; j < matrix[0].size(); j++) {
        int sum = 0;
        for (int i = 0; i < matrix.size(); i++) {
            sum += matrix[i][j];
        }
        ans.push_back(sum);
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

    vector<int> result = columnSums(matrix);

    cout << "Column sums: ";
    for (int sum : result) {
        cout << sum << " ";
    }
    cout << endl;

    return 0;
}
