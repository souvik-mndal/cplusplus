//WAP to find the key pairs in an array
// 1 4 45 9 6 10 8      x=16
// ans=true    ( as 6+10=16)
#include<bits/stdc++.h>
using namespace std;
bool key_pair( int arr[] ,int n , int x ){
    sort( arr , arr+n );
    int s=0,e=n-1;
    while( s<e ){
        int add=arr[s]+arr[e];
        if( add==x ){
            return true;
        }
        else if( add<x ){
            s++;
        }
        else{
            e--;
        }
    }
    return false;
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
    int x;
    cout<<"Enter the sum you want to take in the array : ";
    cin>>x;
    bool ans = key_pair( arr , n , x );
    if( ans ){
        cout<<"the sum is present ";
    }
    else{
        cout<<"the sum is not present ";
    }
}