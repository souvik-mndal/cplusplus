//WAP to convert decimal to binary
//input:10  --> 1010
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    int ans=0,i=1;
    while(num != 0){
        int rem = num % 2;
        ans = ans + (rem * i);
        i *= 10;
        num /= 2;
    }
    cout<<"the binary number is : "<<ans;
}