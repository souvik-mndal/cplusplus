//WAP to print all the pairs
#include<bits/stdc++.h>
using namespace std;
void pairs( int arr[] , int n ){
    for( int i=0 ; i<n ; i++ ){
        for( int j=i ; j<n ; j++ ){
            cout<<arr[i]<<" , "<<arr[j]<<endl;
        }
    }
}
int main(){
    int n;
    cout<<"Enter the total number you want to take for an array: ";
    cin>>n;
    int arr[n];
    for( int i=0 ; i<n ; i++ ){
        cout<<"enter the value for index "<<i<<" : ";
        cin>>arr[i];
    }
    pairs( arr, n);
}