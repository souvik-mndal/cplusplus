/*
    Program to compute the factorial of a number N using vector to store large intermediate results.

    Example:
    Input:
        N = 5

    Output:
        "120"  // 5! = 5 × 4 × 3 × 2 × 1 = 120
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
string factorial(int N) {
    vector<int> a;
    a.push_back(1);  
    int carry = 0;
 
    for (int i = 2; i <= N; i++) { 
        for (int j = 0; j < a.size(); j++) {
            int x = a[j] * i + carry;   
            a[j] = x % 10;              
            carry = x / 10;             
        }
 
        while (carry) {
            a.push_back(carry % 10);
            carry /= 10;
        }
    }
 
    reverse(a.begin(), a.end()); 
    string ans = "";
    for (int digit : a) {
        ans += to_string(digit);
    }

    return ans;
}

int main() {
    int n;
    cout << "Enter a number to find its factorial: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        string result = factorial(n);
        cout << "Factorial of " << n << " is: " << result << endl;
    }

    return 0;
}
