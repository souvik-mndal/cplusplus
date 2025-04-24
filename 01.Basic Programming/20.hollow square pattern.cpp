// WAP to print a hollow square pattern of stars using user input
// Input: 5
// Output:
// * * * * * 
// *       * 
// *       * 
// *       * 
// * * * * * 

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the hollow square pattern: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Print * on the border, space inside
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
