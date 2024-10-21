//WAP to find the sum of 3 numbers using fn
#include<bits/stdc++.h>
using namespace std;
int sum( int n1 , int n2 , int n3){
    int ans = n1+n2+n3;
    return ans;
}
int main(){
    int num1 , num2 , num3;
    cout<<"Enter the three numbers :";
    cin>>num1>>num2>>num3;
    cout<<"The sum of three numbers are : "<<sum( num1,num2,num3);  
}