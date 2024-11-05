//WAP to find the peak element in a mountain array 
// 10 20 50 40 30
// ans = 50
#include<bits/stdc++.h>
using namespace std;
int peak( int arr[] , int n ){
    int ans=-1;
    int s=0 , e=n-1;
    while( s<=e ){
        int mid = s+(e-s)/2;
        if( s==e ){
            return arr[s];
        }
        else if(arr[mid]<arr[mid+1] && mid+1<n ){
            s=mid+1;
        }
        else{
            e=mid;
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
    cout<<"The peak element is : "<<peak( arr , n );
}