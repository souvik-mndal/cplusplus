// WAP to find the 2's complement of a number.
// Input: 5
// Output: -5

#include <iostream>
using namespace std;

int twosComplement(int num) {
    return (~num) + 1;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "2's Complement: " << twosComplement(num) << endl;

    return 0;
}
