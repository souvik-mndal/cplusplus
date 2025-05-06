// WAP to find the smallest digit in a number.
// Input: 4569
// Output: 4

#include <iostream>
#include <limits.h>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int small = INT_MAX;
    while(num != 0) {
        int lb = num % 10;
        small = min(lb, small);
        num /= 10;
    }

    cout << "Smallest digit: " << small << endl;

    return 0;
}
