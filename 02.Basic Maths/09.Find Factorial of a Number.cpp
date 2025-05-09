// WAP to find the factorial of a number.
// Input: 5
// Output: 120

#include <iostream>
using namespace std;

unsigned long long factorial(int num) {
    unsigned long long ans = 1;
    for (int i = 1; i <= num; i++) {
        ans *= i;
    }
    return ans;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Factorial: " << factorial(num) << endl;

    return 0;
}
