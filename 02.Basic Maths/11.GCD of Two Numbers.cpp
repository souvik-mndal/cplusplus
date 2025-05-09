// WAP to find the GCD (Greatest Common Divisor) of two numbers.
// Input: 20 28
// Output: 4

#include <iostream>
using namespace std;

int findGCD(int a, int b) {
    while (a != b) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
    return a;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "GCD: " << findGCD(a, b) << endl;

    return 0;
}
