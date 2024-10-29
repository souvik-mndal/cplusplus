//WAP to find the missing element in the array with duplicates
// 1 5 3 4 3 5 6 
// ans = 2( missing)
#include<bits/stdc++.h>
using namespace std;
int missing( int arr[] , int n ){
    int hash[n+1]={0};
    for( int i=0 ; i<n ; i++ ){
        hash[arr[i]]++;
    }
    for( int i=1 ; i<=n ; i++ ){
        if( hash[i]==0 ){
            return i;
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
    int ans= missing( arr , n );
    cout<<"The missing number is : "<<ans;
}
