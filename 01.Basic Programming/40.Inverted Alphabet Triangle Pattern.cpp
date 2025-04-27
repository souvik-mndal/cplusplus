// WAP to print an Inverted Alphabet Triangle Pattern.
// Input: 5
// Output:
/*
ABCDE
ABCD
ABC
AB
A
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            char ch = 'A' + j;
            cout << ch;
        }
        cout << endl;
    }
}
