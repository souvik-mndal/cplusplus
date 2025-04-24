// WAP to print a hollow rectangle pattern using user input for rows and columns
// Input: 4 6
// Output:
// * * * * * * 
// *         * 
// *         * 
// * * * * * * 

#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Enter number of rows: ";
    cin >> n;
    cout << "Enter number of columns: ";
    cin >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            // Print * on the border, space inside
            if (i == 0 || j == 0 || i == n - 1 || j == m - 1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
