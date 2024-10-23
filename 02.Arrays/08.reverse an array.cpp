//WAP to reverse an array
// 10 20 30 40 50 60
// ans= 60 50 40 30 20 10
#include<bits/stdc++.h>
using namespace std;
void reverse_arr( int arr[] , int n){
    int s=0,e=n-1 ;
    while( s<e ){
        swap( arr[s++] , arr[e--] );
    }
    for( int i=0 ; i<n ; i++ ){
        cout<<arr[i]<<" ";
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
    reverse_arr( arr , n );
}