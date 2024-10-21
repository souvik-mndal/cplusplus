//WAP to find the max of 3 numbers using fn
#include<bits/stdc++.h>
using namespace std;
int maximum( int n1 , int n2 , int n3){
    return max({n1,n2,n3});
}
int main(){
    int num1 , num2 , num3;
    cout<<"Enter the three numbers :";
    cin>>num1>>num2>>num3;
    cout<<"The maximum of three numbers are : "<<maximum( num1,num2,num3);
}