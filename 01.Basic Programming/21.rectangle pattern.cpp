// WAP to print a solid rectangle pattern using user input for rows and columns
// Input: 3 5
// Output:
// * * * * * 
// * * * * * 
// * * * * * 

#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Enter number of rows: ";
    cin >> n;
    cout << "Enter number of columns: ";
    cin >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}
