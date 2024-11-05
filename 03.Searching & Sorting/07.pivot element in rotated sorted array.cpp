//WAP to find the pivot element in a rotated sorted array
// 12 14 16 2 4 6 8 10 
// ans = 16
#include<bits/stdc++.h>
using namespace std;
int pivot( int arr[] , int n ){
    int s=0 , e=n-1;
    while( s<=e ){
        int mid = s+(e-s)/2;
        if( s==e ){
            return arr[s];
        }
        else if( arr[mid]>arr[mid+1] && mid+1<n ){
            return arr[mid];
        }
        else if( arr[mid]<arr[mid-1] && mid-1>=0 ){
            return arr[mid-1];
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
int main(){
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;
    int arr[n];
    for( int i=0 ; i<n ; i++ ){
        cout<<"Enter the element for index "<<i<<" : ";
        cin>>arr[i];
    }
    cout<<"The pivot element is : "<<pivot( arr , n );
}