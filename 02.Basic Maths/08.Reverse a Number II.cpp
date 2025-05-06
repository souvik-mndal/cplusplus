// WAP to reverse an integer while handling overflow.
// Input: -123
// Output: -321

#include <iostream>
#include <limits.h>
using namespace std;

int reverse(int x) {
    bool flag = false;
    if (x < 0) {
        flag = true;
        x *= -1;
    }
    if (x <= INT_MIN) {
        return 0;
    }
    int rev = 0;
    while ( x != 0 ) {
        if (rev > (INT_MAX / 10)) {
            return 0;
        }
        rev = (rev * 10) + (x % 10);
        x /= 10;
    }
    if ( flag ) {
        return -rev;
    }
    return rev;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Reversed number: " << reverse(num) << endl;

    return 0;
}
