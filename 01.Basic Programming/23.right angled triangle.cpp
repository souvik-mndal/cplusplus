// WAP to print a right-angled triangle pattern using user input
// Input: 5
// Output:
// * 
// * * 
// * * * 
// * * * * 
// * * * * * 

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}
