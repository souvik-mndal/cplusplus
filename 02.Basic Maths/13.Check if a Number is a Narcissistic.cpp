// WAP to check whether a number is a Narcissistic number.
// A Narcissistic number is a number that is the sum of its own digits 
// each raised to the power of the number of digits.
// Input: 153
// Output: Yes

#include <iostream>
#include <cmath>
using namespace std;

int power( int num , int p ){
    int ans = 1;
    for( int i=0 ; i<p ; i++){
        ans *= num;
    }
    return ans;
}
string isNarcissistic(int num) {
    int ans = 0;
    int countDigit = 0;
    int temp = num;

    // Count digits
    while (temp != 0) {
        countDigit++;
        temp /= 10;
    }

    temp = num;

    // Calculate the sum of each digit raised to the power of countDigit
    while (temp != 0) {
        ans += power(temp % 10, countDigit);
        temp /= 10;
    }

    return (ans == num) ? "Yes" : "No";
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << isNarcissistic(num) << endl;

    return 0;
}
