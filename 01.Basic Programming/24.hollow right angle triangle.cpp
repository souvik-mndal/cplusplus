// WAP to print a hollow right-angled triangle pattern using user input
// Input: 5
// Output:
// * 
// * * 
// *   * 
// *     * 
// * * * * * 

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            // Print '*' at the border positions, spaces in between
            if (j == 0 || i == n - 1 || j == i) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
