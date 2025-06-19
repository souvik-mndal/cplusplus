#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to check if it's possible to place 'k' cows such that the minimum distance between them is at least 'mid'
bool canPlaceCows(const vector<int>& stalls, int k, int mid) {
    int cowsPlaced = 1;
    int lastPos = stalls[0];

    for (int i = 1; i < stalls.size(); i++) {
        if (stalls[i] - lastPos >= mid) {
            cowsPlaced++;
            lastPos = stalls[i];
        }
        if (cowsPlaced == k) return true;
    }
    return false;
}

// Function to compute the largest minimum distance
int aggressiveCows(vector<int>& stalls, int k) {
    sort(stalls.begin(), stalls.end());
    int low = 1; // Minimum possible distance
    int high = stalls.back() - stalls[0]; // Maximum possible distance
    int answer = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (canPlaceCows(stalls, k, mid)) {
            answer = mid;       // This distance is possible, try to go higher
            low = mid + 1;
        } else {
            high = mid - 1;     // Try smaller distance
        }
    }

    return answer;
}

int main() {
    int n, k;
    cout << "Enter number of stalls: ";
    cin >> n;

    vector<int> stalls(n);
    cout << "Enter stall positions:\n";
    for (int i = 0; i < n; i++) {
        cin >> stalls[i];
    }

    cout << "Enter number of cows: ";
    cin >> k;

    int result = aggressiveCows(stalls, k);
    cout << "Maximum minimum distance between cows: " << result << endl;

    return 0;
}
