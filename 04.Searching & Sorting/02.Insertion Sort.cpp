/*
    Program to perform Insertion Sort on an array.

    Example:
    Input: [5, 2, 9, 1, 5, 6]
    Output: [1, 2, 5, 5, 6, 9]
*/

#include <iostream>
#include <vector>
using namespace std;
 
void insertionSort(vector<int>& ans) {
    for( int i = 1 ; i < ans.size() ; i++ ){
        int key = ans[i];
        int j = i-1 ;
        while( j >= 0 && ans[j] > key ){
            ans[j+1] = ans[j];
            j--;
        }
        ans[j+1] = key;
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

    insertionSort(arr);  

    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
