//WAP to find the duplicate number in the array
// 1 3 4 2 2             ** elements are from 1 to (n+1)
// ans = 2
#include<bits/stdc++.h>
using namespace std;
int dup_no( int arr[] , int n ){
    sort( arr , arr+n );
    for( int i=0 ; i<n ; i++ ){
        if( arr[i] == i ){
            return arr[i];
        }
    }
    return -1;
} 
int main(){
    int n;
    cout<<"Enter the number of elements you want to take : ";
    cin>>n;
    int arr[n];
    for( int i=0 ; i<n ; i++ ){
        cout<<"enter the value for index "<<i<<" : ";
        cin>>arr[i];
    }
    int ans= dup_no( arr , n );
    cout<<"The duplicate number is : "<<ans;
}