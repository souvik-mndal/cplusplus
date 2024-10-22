//WAP to find the target value
#include<bits/stdc++.h>
using namespace std;
int lin_srch( int arr[] , int n , int k ){
    for( int i=0 ; i<n ; i++ ){
        if( arr[i]==k ){
            return i;
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
    int k;
    cout<<"What value you want to find : ";
    cin>>k;
    int ans = lin_srch( arr , n , k );
    if( ans==-1 ){
        cout<<"target value not found ";
    }
    else{
        cout<<"The target value is present at index : "<<ans;
    }
}
