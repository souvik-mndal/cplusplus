/*
    Function to find the quotient (dividend / divisor) using binary search.
    This avoids using the division (/) operator directly and handles:
    - Negative numbers
    - Integer overflow (like INT_MIN / -1)
    - Division by zero
*/
#include <iostream>
#include <limits.h>
#include <cmath>
using namespace std;

long long int findQuotient(int dividend, int divisor) { 
    if (divisor == 0) return INT_MAX; 
 
    long long int new_dividend = abs((long long)dividend);
    long long int new_divisor = abs((long long)divisor);
 
    long long int start = 0, end = new_dividend;
    long long int ans = -1;

    while (start <= end) {
        long long int mid = start + (end - start) / 2;
        if (mid * new_divisor <= new_dividend) {
            ans = mid;           
            start = mid + 1;     
        } else {
            end = mid - 1;       
        }
    }
 
    if ((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0)) {
        return -ans;
    }

    return ans;
}
 
int main() {
    int dividend, divisor;
 
    cout << "Enter dividend: ";
    cin >> dividend;
    cout << "Enter divisor: ";
    cin >> divisor;
 
    long long int result = findQuotient(dividend, divisor);
 
    cout << "Quotient: " << result << endl;

    return 0;
}
