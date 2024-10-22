//WAP to take input for an array and print it 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the total number you want to take for an array: ";
    cin>>n;
    int arr[n];
    for( int i=0 ; i<n ; i++ ){
        cout<<"enter the value for index "<<i<<" : ";
        cin>>arr[i];
    }
    for( int i=0 ; i<n ; i++ ){
        cout<<arr[i]<<" ";
    }
}