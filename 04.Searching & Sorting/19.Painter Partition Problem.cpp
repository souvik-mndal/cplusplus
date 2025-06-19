#include <iostream>
#include <vector>
#include <numeric> // For accumulate()
using namespace std;

// Function to check if it's possible to paint all boards within `mid` time using `k` painters
bool isPossible(const vector<int>& boards, int k, int mid) {
    int sum = 0, painters = 1;
    for (int i = 0; i < boards.size(); i++) {
        if (boards[i] > mid)
            return false;  // If a single board takes more time than mid, return false

        if (sum + boards[i] > mid) {
            painters++;
            sum = boards[i];  // Assign to new painter

            if (painters > k)
                return false;
        } else {
            sum += boards[i];
        }
    }
    return true;
}

// Main function to find minimum time to paint all boards using k painters
int findMinimumTimeToPaint(const vector<int>& boards, int k) {
    if (k > boards.size()) return -1;  // Not enough boards

    int start = 0;
    int end = accumulate(boards.begin(), boards.end(), 0);
    int result = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (isPossible(boards, k, mid)) {
            result = mid;       // Store the valid answer
            end = mid - 1;      // Try for a smaller max time
        } else {
            start = mid + 1;    // Need more time
        }
    }

    return result;
}

int main() {
    int n, k;
    cout << "Enter number of boards: ";
    cin >> n;

    vector<int> boards(n);
    cout << "Enter lengths of boards:\n";
    for (int i = 0; i < n; i++) {
        cin >> boards[i];
    }

    cout << "Enter number of painters: ";
    cin >> k;

    int result = findMinimumTimeToPaint(boards, k);
    if (result == -1)
        cout << "Not enough boards for each painter.\n";
    else
        cout << "Minimum time to paint all boards: " << result << endl;

    return 0;
}
