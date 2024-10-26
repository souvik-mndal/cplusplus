//WAP to rotate an array k times to the right
// 10 20 30 40 50 60    k=3
// ans = 40 50 60 10 20 30
#include<bits/stdc++.h>
using namespace std;
void rotate_arr( int arr[] , int n , int k ){
    k=k%n;
    reverse( arr , arr+n );
    reverse( arr , arr+k );
    reverse( arr+k , arr+n);
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
    cout<<"Enter how much time you want to rotate : ";
    cin>>k;
    rotate_arr( arr, n , k);
    for( int i=0 ; i<n ; i++ ){
        cout<<arr[i]<<" ";
    }
}