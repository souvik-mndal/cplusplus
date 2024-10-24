//WAP to move the -ve values to the left in the array
#include<bits/stdc++.h>
using namespace std;
void move_neg( int arr[] , int n){
    int i=0 ;
    for( int j=0 ; j<n ; j++ ){
        if( arr[j] < 0 ){
            swap( arr[j] , arr[i++]);
        }
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
    move_neg( arr, n);
    for( int i=0 ; i<n ; i++ ){
        cout<<arr[i]<<" ";
    }
}