// WAP to find the odd occuring element 
// 1 1 5 5 2 2 3 3 2 4 4 
// output:2
#include<bits/stdc++.h>
using namespace std;
int search( int arr[] , int n){
    int i=0,j=n-1;
    while(i<=j){
        int mid=i+(j-i)/2;
        if(i==j){
            return arr[mid];
        }
        if( mid&1 ){
            if(arr[mid]==arr[mid+1] && mid+1<n ){
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        else{
            if( arr[mid]==arr[mid+1] && mid+1<n ){
                i=mid+2;
            }
            else{
                j=mid;
            }
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
    cout<<"the odd occuring element is  : "<<search(arr,n);
}