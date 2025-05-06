// WAP to check whether a number is prime or not.
// Input: 7
// Output: Yes

#include <iostream>
using namespace std;


string isPrime(int num) {
    if (num == 1) {
        return "No";
    }
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return "No";
        }
    }
    return "Yes";
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Is the number prime? " << isPrime(num) << endl;

    return 0;
}
