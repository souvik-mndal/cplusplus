//WAP to shift the array element by 1 to the (R)
#include<bits/stdc++.h>
using namespace std;
void shift_r_1( int arr[] , int n ){
    int ans[n];
    for( int i=0 ; i<n ; i++ ){
        int ind = (i+1)%n;
        ans[ind] = arr[i];
    }
    for( int i=0 ; i<n ; i++ ){
        cout<<ans[i]<<" ";
    }
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
    shift_r_1( arr, n);
}