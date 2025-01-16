// WAP to search an element in a nearly sorted array 
// 20 10 30 50 40 70 60        x=50
// output:3(index)
#include<bits/stdc++.h>
using namespace std;
int search( int arr[] , int n , int x){
    int i=0,j=n-1;
    while(i<=j){
        int mid=i+(j-i)/2;
        if(arr[mid]==x){
            return mid;
        }
        else if(arr[mid+1]==x && mid+1<n){
            return mid+1;
        }
        else if( arr[mid-1]==x && mid-1>=0){
            return mid-1;
        }
        else if(arr[mid]<x){
            i=mid+2;
        }
        else{
            j=mid-2;
        }
    }
    return -1;
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
    int x;
    cout<<"Enter the target element : ";
    cin>>x;
    cout<<"the target is present at index : "<<search(arr,n,x);
}