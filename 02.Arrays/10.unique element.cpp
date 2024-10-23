//WAP to find the unique element in an array
#include<bits/stdc++.h>
using namespace std;
int unique_print( int arr[] , int n ){
    int ans=0;
    for( int i=0 ; i<n ; i++ ){
        ans ^=arr[i];
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
    int ans= unique_print( arr , n );
    if( ans == 0 ){
        cout<<"No unique element ";
    }
    else{
        cout<<"The unique element is : "<<ans;
    }
}