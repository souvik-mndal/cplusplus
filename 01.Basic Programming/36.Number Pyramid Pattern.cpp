// WAP to print a number pyramid pattern using user input
// Input: 5
// Output:
//         1 
//       1 2 
//     1 2 3 
//   1 2 3 4 
// 1 2 3 4 5 

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << "  ";
        }
        for (int j = 0; j <= i; j++) {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}
