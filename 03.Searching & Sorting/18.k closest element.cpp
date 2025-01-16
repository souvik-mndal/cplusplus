// WAP to find the k closest element in the array
// 1 2 3 4 5    k=4  x=3
// 2 1 0 1 2 (after substracting with x )
// output: 1 2 3 4       as these as the 4 closest to x
#include<bits/stdc++.h>
using namespace std;
int bs( int arr[] , int n , int x){
    int i=0,j=n-1;
    int ans=j;
    while(i<=j){
        int mid=i+(j-i)/2;
        if( arr[mid]>=x){
            ans=mid;
            j=mid-1;
        }
        else if(arr[mid]<x){
            i=mid+1;
        }
        else{
            j=mid-1;
        }
    }
    return ans;
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
    int k;
    cout<<"Enter the no of element : ";
    cin>>k;
    int x;
    cout<<"Enter the closest : ";
    cin>>x;
    int high=bs(arr,n,x);
    int low=high-1;
    while(k--){
        if(low<0){
            high++;
        }
        else if(high>=n){
            low--;
        }
        else if( x-arr[low]>arr[high]-x){
            high++;
        }
        else{
            low--;
        }
    } 
    for( int i=low+1;i<high;i++){
        cout<<arr[i]<<" ";  
    }
}