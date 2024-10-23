//WAP to print all the triplets
#include<bits/stdc++.h>
using namespace std;
void triplets( int arr[] , int n ){
    for( int i=0 ; i<n ; i++ ){
        for( int j=i ; j<n ; j++ ){
            for( int k=j ; k<n ; k++ ){
                cout<<arr[i]<<" , "<<arr[j]<<" , "<<arr[k]<<endl;
            }
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
    triplets( arr, n);
}