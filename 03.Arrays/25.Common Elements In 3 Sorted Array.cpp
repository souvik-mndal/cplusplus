/*
Program to find common elements in three sorted arrays.

Description:
This program takes three sorted arrays as input and finds all elements common to all three arrays.
It handles duplicates and only includes each common element once in the result.

Sample Input:
Enter size of array 1: 6
Enter elements: 1 5 10 20 40 80
Enter size of array 2: 5
Enter elements: 6 7 20 80 100
Enter size of array 3: 8
Enter elements: 3 4 15 20 30 70 80 120

Sample Output:
Common elements: 20 80
*/

#include <iostream>
#include <vector>
using namespace std;
 
vector<int> findCommonElements(const vector<int>& array1, const vector<int>& array2, const vector<int>& array3) {
    int x = 0, y = 0, z = 0;
    vector<int> ans;
 
    while (x < array1.size() && y < array2.size() && z < array3.size()) {
        if (array1[x] == array2[y] && array2[y] == array3[z]) {
            if (ans.empty() || ans.back() != array1[x]) {
                ans.push_back(array1[x]);
            }
            x++; y++; z++;
        } else if (array1[x] < array2[y]) {
            x++;
        } else if (array2[y] < array3[z]) {
            y++;
        } else {
            z++;
        }
    }

    return ans;
}

int main() {
    int n1, n2, n3;
 
    cout << "Enter size of array 1: ";
    cin >> n1;
    vector<int> array1(n1);
    cout << "Enter elements: ";
    for (int i = 0; i < n1; i++) cin >> array1[i];

    cout << "Enter size of array 2: ";
    cin >> n2;
    vector<int> array2(n2);
    cout << "Enter elements: ";
    for (int i = 0; i < n2; i++) cin >> array2[i];

    cout << "Enter size of array 3: ";
    cin >> n3;
    vector<int> array3(n3);
    cout << "Enter elements: ";
    for (int i = 0; i < n3; i++) cin >> array3[i];
 
    vector<int> common = findCommonElements(array1, array2, array3);

    cout << "Common elements: ";
    if (common.empty()) {
        cout << "None";
    } else {
        for (int val : common) {
            cout << val << " ";
        }
    }
    cout << endl;

    return 0;
}
