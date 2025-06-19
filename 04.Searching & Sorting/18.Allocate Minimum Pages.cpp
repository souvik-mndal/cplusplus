#include <iostream>
#include <vector>
#include <numeric>  // For accumulate
using namespace std;

bool isPossible(vector<int> &arr, int n, int m, long long mid) {
    long long sum = 0;
    int studentCount = 1;

    for (int i = 0; i < n; i++) {
        if (arr[i] > mid) return false;

        if (sum + arr[i] > mid) {
            studentCount++;
            sum = arr[i];

            if (studentCount > m) return false;
        } else {
            sum += arr[i];
        }
    }
    return true;
}

long long findMinimumPages(vector<int> &arr, int n, int m) {
    if (m > n) return -1;

    long long start = 0;
    long long end = accumulate(arr.begin(), arr.end(), 0LL);
    long long result = -1;

    while (start <= end) {
        long long mid = start + (end - start) / 2;
        if (isPossible(arr, n, m, mid)) {
            result = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return result;
}

int main() {
    int n, m;
    cout << "Enter number of books: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter number of pages in each book:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter number of students: ";
    cin >> m;

    long long answer = findMinimumPages(arr, n, m);

    if (answer == -1)
        cout << "Not enough books to allocate.\n";
    else
        cout << "Minimum number of pages: " << answer << endl;

    return 0;
}
