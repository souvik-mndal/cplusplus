//WAP to find the maximum number in the array
// 12 45 76 5 2 0 52 5 6  54 6+4 81 3 45
// ans=0
#include<bits/stdc++.h>
using namespace std;
int maxi( int arr[] , int n ){
    int ans = arr[0];
    for( int i=1 ; i<n ; i++ ){
        if( ans < arr[i] ){
            ans = arr[i];
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
    cout<<"The maximum value is : "<<maxi( arr , n );
}