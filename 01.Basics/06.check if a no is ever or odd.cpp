//WAP to check if a number is even or odd
#include<bits/stdc++.h>
using namespace std;
int main(){
    int number;
    cout<<"enter the number : ";
    cin>>number;
    if( number % 2 == 0 ){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }
}