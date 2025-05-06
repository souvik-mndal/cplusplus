// WAP to reverse a given number
// Input: 1234
// Output: 4321

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int rev = 0;
    while(num != 0) {
        int digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }

    cout << "Reversed number: " << rev << endl;
    return 0;
}
