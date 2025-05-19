// WAP to count total number of set bits in binary representation 
// of all numbers from 1 to n.
// Input: 4
// Output: 5 (binary: 1->1, 2->10, 3->11, 4->100)

#include <iostream>
using namespace std;

int countSetBits(int n) {
    int ans = 0;
    while (n != 0) {
        if (n & 1) {
            ans++;
        }
        n = n >> 1;
    }
    return ans;
}

int countTotalSetBits(int n) {
    int total = 0;
    for (int i = 1; i <= n; i++) {
        total += countSetBits(i);
    }
    return total;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = countTotalSetBits(n);
    cout << "Total set bits from 1 to " << n << " is: " << result << endl;

    return 0;
}
