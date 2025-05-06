// WAP to calculate the sum of digits of a number.
// Input: 456
// Output: 15(4+5+6)

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int sum = 0;
    while(num != 0){
        int lb = num % 10;
        sum += lb;
        num /= 10;
    }

    cout << "Sum of digits: " << sum << endl;

    return 0;
}
