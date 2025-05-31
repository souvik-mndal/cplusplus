/*
    Program to perform Selection Sort on an array.

    Example:
    Input: [5, 2, 9, 1, 5, 6]
    Output: [1, 2, 5, 5, 6, 9]
*/

#include <iostream>
#include <vector>
using namespace std;
 
void selectionSort(vector<int>& ans) {
    for (int i = 0; i < ans.size() - 1; i++) {
        int mini = i;
        for( int j = i + 1 ; j < ans.size() ; j++ ){
            if( ans[mini] > ans[j] ){
                mini = j;
            }
        }
        swap( ans[mini] , ans[i] );
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    selectionSort(arr);  

    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
