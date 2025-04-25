// WAP to print a hollow diamond pattern using user input
// Input: 5
// Output:
//         * 
//       *   * 
//     *       * 
//   *           * 
// *               * 
//   *           * 
//     *       * 
//       *   * 
//         *   

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows (half of diamond height): ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << "  ";
        }
        for (int j = 0; j <= 2 * i; j++) {
            if (j == 0 || j == 2 * i)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "  ";
        }
        for (int j = 0; j < (2 * (n - i) - 3); j++) {
            if (j == 0 || j == (2 * (n - i) - 4))
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}
