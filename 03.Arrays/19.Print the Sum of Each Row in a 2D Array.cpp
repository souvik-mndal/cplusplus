#include <iostream>
#include <vector>
using namespace std;

// Function to compute sum of each row in a 2D matrix
vector<int> rowSums(const vector<vector<int>>& arr) {
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++) {
        int sum = 0;
        for (int j = 0; j < arr[i].size(); j++) {
            sum += arr[i][j];
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

    vector<int> result = rowSums(matrix);

    cout << "Row sums: ";
    for (int sum : result) {
        cout << sum << " ";
    }
    cout << endl;

    return 0;
}
