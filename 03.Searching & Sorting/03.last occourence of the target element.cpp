//WAP to find the last occourence of the target element
// 10 20 30 30 30 30 30 40 50        target = 30
// ans = 6( index)
#include<bits/stdc++.h>
using namespace std;
int last_occ( int arr[] , int n , int x ){
    int s=0 , e=n-1;
    int ans = -1 ;
    while( s<=e ){
        int mid = s+(e-s)/2;
        if( arr[mid]==x ){
            ans=mid;
            s=mid+1;
        }
        else if( arr[mid]<x ){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;
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
    cout<<"Enter the target element : ";
    cin>>x;
    cout<<"The last occourence of target element at index : "<<last_occ( arr , n , x );
}