//WAP to check if a number is Palindrome or not
//input: 12321
//Output: Yes , Palindrome 
#include <iostream>
using namespace std;

// Function to reverse a number
int reverseNumber(int num) {
    int rev = 0;
    while (num != 0) {
        rev = (rev * 10) + (num % 10);
        num /= 10;
    }
    return rev;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int reverseNum = reverseNumber( number );
    if( number == reverseNum ){
        cout<<"The number is a palindrome";
    }
    else{
        cout<<"The number is not a palindrome";
    }

    return 0;
}
