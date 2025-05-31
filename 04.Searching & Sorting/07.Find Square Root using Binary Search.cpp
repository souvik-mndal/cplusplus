/*
    Problem: Compute and return the integer square root of a non-negative number x.
    The integer square root is the floor value of the actual square root.

    Example:
    Input: 8
    Output: 2
    Explanation: sqrt(8) ≈ 2.828, so we return 2.
*/

#include <iostream>
using namespace std;
 
int mySqrt(int x) {
    int s = 0, e = x;
    int ans = -1;

    while (s <= e) {
        long long int mid = s + (e - s) / 2;
 
        if (mid * mid <= x) {
            ans = mid;
            s = mid + 1;
        } 
        else { 
            e = mid - 1;
        }
    }

    return ans;
}

int main() {
    int x;
    cout << "Enter a non-negative number: ";
    cin >> x;

    int result = mySqrt(x);
    cout << "Integer square root of " << x << " is: " << result << endl;

    return 0;
}
