// WAP to set the k-th bit of a given number n (0-indexed from right).
// Input: n = 5, k = 1
// Output: 7
// Explanation: Binary of 5 is 0101. Setting 1st bit gives 0111 which is 7.

#include <iostream>
using namespace std;

int setKthBit(int n, int k) {
    int ans = (n | (1 << k));
    return ans;
}

int main() {
    int n, k;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Enter the bit position to set (0-indexed): ";
    cin >> k;

    int result = setKthBit(n, k);
    cout << "Result after setting the " << k << "-th bit: " << result << endl;

    return 0;
}
