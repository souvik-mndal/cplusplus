//WAP to find the missing number in the array
// 0 1 2 3 4 6 7 8
// ans = 5
#include<bits/stdc++.h>
using namespace std;
int miss_no( int arr[] , int n ){
    int ans = 0;
    for( int i=0 ; i<=n ; i++ ){
        ans = ans ^ i;
    }
    for( int i=0 ; i<n ; i++ ){
        ans = ans ^ arr[i];
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
    cout<<"The missing number is : "<<miss_no( arr , n );
}