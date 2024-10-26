//WAP to rearrange the array element by sign 
// 3 1 -2 -5 2 -4
// ans = 3 -2 1 -5 2 -4          ( positive and negative values are same)
#include<bits/stdc++.h>
using namespace std;
void rearrange( int arr[] , int n ){
    int pos=0 , neg=1;
    int ans[n];
    for( int i=0 ; i<n ; i++ ){
        if( arr[i]>0 ){
            ans[pos]=arr[i];
            pos+=2;
        }
        else{
            ans[neg]=arr[i];
            neg+=2;
        }
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
    rearrange( arr , n );
}