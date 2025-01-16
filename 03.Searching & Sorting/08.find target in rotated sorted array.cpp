//WAP to find the target in a rotated sorted array
// 12 14 16 2 4 6 8 10    x=14
// ans = 1(index)
#include<bits/stdc++.h>
using namespace std;
int pivot( int arr[] , int n ){
    int s=0 , e=n-1;
    while( s<=e ){
        int mid = s+(e-s)/2;
        if( s==e ){
            return s;
        }
        else if( arr[mid]>arr[mid+1] && mid+1<n ){
            return mid;
        }
        else if( arr[mid]<arr[mid-1] && mid-1>=0 ){
            return mid-1;
        }
        else if( arr[mid]<arr[s] ){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}
int bs(int arr[],int s,int e,int x){
    while(s<=e){
        int mid =s+(e-s)/2;
        if( arr[mid]==x){
            return mid;
        }
        else if( arr[mid]<x){
            s=mid+1;
        }
        else{
            e=mid-1;
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
    int piv=pivot(arr,n);
    int ans;
    if( x>=arr[0] && x<=arr[piv]){
        ans=bs(arr,0,piv,x);
    }
    else{
        ans=bs(arr,piv+1,n-1,x);
    }
    cout<<"the target element is found at index :"<<ans;
}