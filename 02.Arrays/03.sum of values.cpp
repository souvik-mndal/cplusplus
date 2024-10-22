//WAp to find the sum of the values of an array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5];
    for( int i=0 ; i<5 ; i++ ){
        cout<<"enter the value for index "<<i<<" : ";
        cin>>arr[i];
    }
    int sum=0;
    for( int i=0 ; i<5 ; i++ ){
        sum+=arr[i];
    }
    cout<<"The sum is : "<<sum;
}