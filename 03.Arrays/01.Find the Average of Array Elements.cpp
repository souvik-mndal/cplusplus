// WAP to calculate the average of an array of integers.
// Input: 5
// 10 20 30 40 50
// Output: Average: 30

#include <iostream>
#include <vector>
using namespace std;

double findAverage(const vector<int>& arr) {
    int sum = 0;
    for (int num : arr) {
        sum += num;
    }
    return (double)sum / arr.size();
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int& num : arr) {
        cin >> num;
    }

    double average = findAverage(arr);
    cout << "Average: " << average << endl;

}
