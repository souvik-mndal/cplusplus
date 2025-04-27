// WAP to print a Reverse Alphabet Triangle Pattern.
// Input: 5
// Output:
/*
E
DE
CDE
BCDE
ABCDE
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (char ch = 'A' + n - i - 1; ch <= 'A' + n - 1; ch++) {
            cout << ch;
        }
        cout << endl;
    }
}
