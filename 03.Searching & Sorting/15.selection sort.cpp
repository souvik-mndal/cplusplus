#include<bits/stdc++.h>
using namespace std;
void selection( int arr[], int n){
    for( int i=0 ; i<n-1; i++){
        int mini=i;
        for( int j=i+1 ; j<n ; j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        swap(arr[i],arr[mini]);
    }
}
int main(){
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;
    int arr[n];
    for( int i=0 ; i<n ; i++ ){
        cout<<"Enter the element for index "<<i<<" : ";
        cin>>arr[i];
    }
    selection(arr,n);
    for( int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}