/*
    Program to add two numbers represented as reversed digit arrays.

    Each number is represented as a vector of its digits in reverse order.
    The function adds the two numbers and returns the result as a reversed array.

    Example:
    Input:
        nums1 = {2, 4, 3} // represents 342
        nums2 = {5, 6, 4} // represents 465

    Output:
        result = {7, 0, 8} // represents 807 (342 + 465)
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> addTwoNumbers(vector<int>& nums1, vector<int>& nums2) {
    vector<int> ans;
    int x = 0, y = 0;       
    int carry = 0;         

     while (x < nums1.size() && y < nums2.size()) {
        int sum = nums1[x] + nums2[y] + carry;
        ans.push_back(sum % 10);   
        carry = sum / 10;          
        x++;
        y++;
    }
 
    while (x < nums1.size()) {
        int sum = nums1[x] + carry;
        ans.push_back(sum % 10);
        carry = sum / 10;
        x++;
    }
 
    while (y < nums2.size()) {
        int sum = nums2[y] + carry;
        ans.push_back(sum % 10);
        carry = sum / 10;
        y++;
    }
 
    if (carry) {
        ans.push_back(carry);
    }

    return ans;
}

int main() { 
    vector<int> num1 = {2, 4, 3};   
    vector<int> num2 = {5, 6, 4};   
 
    vector<int> result = addTwoNumbers(num1, num2);
 
    cout << "Result (as reversed digits): ";
    for (int digit : result) {
        cout << digit << " ";
    }
    cout << endl;

    return 0;
}
