// WAP to print a square pattern of stars using user input
// Input: 5
// Output:
// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the square pattern: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}
