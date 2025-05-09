// WAP to find the LCM of two numbers.
// Input: 12 18
// Output: LCM: 36

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

int findLCM(int a, int b) {
    int hcf = findGCD(a, b);
    return (a * b) / hcf;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "LCM: " << findLCM(a, b) << endl;

    return 0;
}
