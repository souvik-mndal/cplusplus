// WAP to print an Alphabet Triangle Pattern.
// Input: 5
// Output:
/*
A
AB
ABC
ABCD
ABCDE
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            char ch = 'A' + j;
            cout << ch;
        }
        cout << endl;
    }
}
