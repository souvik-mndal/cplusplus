// WAP to create the largest number from a list of digits.
// Input: 3 1 4 1
// Output: 4311

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int createLargestNumber(vector<int>& digits) {
    sort(digits.begin(), digits.end());
    int ans = 0;
    for (int i = digits.size() - 1; i >= 0; i--) {
        ans = ans * 10 + digits[i];
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter number of digits: ";
    cin >> n;

    vector<int> digits(n);
    cout << "Enter the digits: ";
    for (int i = 0; i < n; i++) {
        cin >> digits[i];
    }

    int result = createLargestNumber(digits);
    cout << "Largest number: " << result << endl;

    return 0;
}
