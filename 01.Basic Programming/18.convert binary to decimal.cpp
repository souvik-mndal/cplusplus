//WAP to convert binary to decimal
//input:1010  --> 10
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    int ans=0,i=1;
    while(num != 0){
        int rem = num % 10;
        ans = ans + (rem * i);
        i *= 2;
        num /= 10;
    }
    cout<<"the decimal number is : "<<ans;
}