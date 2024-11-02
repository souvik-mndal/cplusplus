//WAP to search a target element using binary search
#include<bits/stdc++.h>
using namespace std;
int BS( int arr[] , int n , int x ){
    int s=0 , e=n-1;
    while( s<=e ){
        int mid = s=(e-s)/2;
        if( arr[mid]==x ){
            return mid;
        }
        else if( arr[mid]<x ){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return -1;
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
    cout<<"The target element is present at index : "<<BS( arr , n , x );
}