//WAP to find the first repeating element
// 1 5 3 4 3 5 6
// ans = 5( first repeating no )
#include<bits/stdc++.h>
using namespace std;
int repeating( int arr[] , int n ){
    unordered_map<int,int>hash;
    for( int i=0 ; i<n ; i++ ){
        hash[arr[i]]++;
    }
    for( int i=0 ; i<n ; i++ ){
        if( hash[arr[i]] >= 2 ){
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
    int ans= repeating( arr , n );
    cout<<"The missing number is : "<<ans;
}