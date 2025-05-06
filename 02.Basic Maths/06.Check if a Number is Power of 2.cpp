// WAP to check whether a number is a power of 2.
// Input: 8
// Output: Yes

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num == 0) {
        cout << "No" << endl;
    } else if ((num & (num - 1)) == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
