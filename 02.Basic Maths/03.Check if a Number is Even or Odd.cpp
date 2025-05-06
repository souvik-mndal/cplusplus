// WAP to check whether a number is even or odd.
// Input: 7
// Output: Odd

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if(num & 1) {
        cout << "Odd" << endl;
    } else {
        cout << "Even" << endl;
    }

    return 0;
}
