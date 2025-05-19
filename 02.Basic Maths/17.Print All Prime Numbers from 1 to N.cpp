// WAP to print all prime numbers from 1 to N.
// Input: 10
// Output: Prime numbers from 1 to 10 are: 2 3 5 7

#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) { 
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

vector<int> printPrimes(int N) {
    vector<int> ans;
    for (int i = 1; i <= N; i++) {
        if (isPrime(i)) {
            ans.push_back(i);
        }
    }
    return ans;
}

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    vector<int> primes = printPrimes(N);
    cout << "Prime numbers from 1 to " << N << " are: ";
    for (int p : primes) {
        cout << p << " ";
    }
    cout << endl;

    return 0;
}
