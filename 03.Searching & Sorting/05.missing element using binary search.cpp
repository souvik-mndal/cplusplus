//WAP to find the missing element using binary search
// 1 2 3 4 6 7 8 9
// ans = 5(missing)
#include<bits/stdc++.h>
using namespace std;
int missing( int arr[] , int n ){
    int ans=-1;
    int s=0 , e=n-1;
    while( s<=e ){
        int mid = s+(e-s)/2;
        int diff = arr[mid]-mid;
        if( diff==1 ){
            s=mid+1;
        }
        else{
            ans=mid;
            e=mid-1;
        }
    }
    return ans+1;
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
    cout<<"The missing element is : "<<missing( arr , n );
}