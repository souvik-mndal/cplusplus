// WAP to print the Symmetric Number Pattern.
// Input: 5
// Output:
/*
1        1
12      21
123    321
1234  4321
1234554321
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n; 
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j <= i; j++) {
            cout << j + 1;
        } 
        for (int j = 0; j < 2 * (n - i) - 2; j++) {
            cout << " ";
        } 
        for (int j = i; j >= 0; j--) {
            cout << j + 1;
        }
        cout << endl;
    } 
}
