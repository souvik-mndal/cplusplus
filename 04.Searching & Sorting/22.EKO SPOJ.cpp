#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
    Function to check if cutting the trees at height `mid` gives at least `m` units of wood.
*/
bool check(vector<int>& trees, int mid, int m) {
    long long sum = 0;
    for (int height : trees) {
        if (height > mid) {
            sum += height - mid;
        }
    }
    return sum >= m;
}

/*
    Function to find the maximum height at which we can cut the trees
    such that we collect at least `m` units of wood.
*/
int maxSawHeight(vector<int>& trees, int m) {
    sort(trees.begin(), trees.end());  // Sort trees by height
    int s = 0, e = trees.back();       // Blade height range: 0 to tallest tree
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (check(trees, mid, m)) {
            ans = mid;    // mid is valid, try a higher cut
            s = mid + 1;
        } else {
            e = mid - 1;  // not enough wood, try lower cut
        }
    }

    return ans;
}

int main() {
    int n, m;
    cout << "Enter number of trees: ";
    cin >> n;

    vector<int> trees(n);
    cout << "Enter heights of trees:\n";
    for (int i = 0; i < n; i++) {
        cin >> trees[i];
    }

    cout << "Enter required amount of wood (m): ";
    cin >> m;

    int result = maxSawHeight(trees, m);
    cout << "Maximum height to set saw: " << result << endl;

    return 0;
}
