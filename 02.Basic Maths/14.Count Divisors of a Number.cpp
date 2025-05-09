// WAP to count the number of divisors of a given number.
// Input: 12
// Output: Number of divisors: 6

#include <iostream>
using namespace std;

int countDivisors(int num) {
    int count = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int result = countDivisors(num);
    cout << "Number of divisors: " << result << endl;

    return 0;
}
