//WAP to sort the 0 & 1 in the array
// 0 1 0 1 0 1 0 1 0 1 
// ans = 0 0 0 0 0 1 1 1 1 1 
#include<bits/stdc++.h>
using namespace std;
void sort_0_1( int arr[] , int n ){
    int s=0 ;
    for( int i=0 ; i<n ; i++ ){
        if( arr[i]==0 ){
            swap( arr[i] , arr[s++]);
        }
    }
    for( int i=0 ; i<n ; i++ ){
        cout<<arr[i]<<" ";
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
    sort_0_1( arr, n);
}