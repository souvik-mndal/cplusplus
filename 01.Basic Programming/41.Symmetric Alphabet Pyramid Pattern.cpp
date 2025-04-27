// WAP to print a Symmetric Alphabet Pyramid Pattern.
// Input: 5
// Output:
/*
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        char ch = 'A';
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        for (int j = 0; j <= i; j++) {
            cout << ch++;
        }
        ch--;
        for (int j = 0; j < i; j++) {
            cout << --ch;
        }
        cout << endl;
    }
}
