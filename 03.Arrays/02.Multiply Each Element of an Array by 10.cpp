// WAP to multiply every element of an array by 10.
// Input: 5
// 1 2 3 4 5
// Output: 10 20 30 40 50

#include <iostream>
#include <vector>
using namespace std;

vector<int> multiplyByTen(const vector<int>& arr) {
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++) {
        ans.push_back(arr[i] * 10);
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> result = multiplyByTen(arr);
    cout << "Result after multiplying by 10: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

}
