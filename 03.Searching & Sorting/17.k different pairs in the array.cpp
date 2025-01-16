// WAP to find the k different pairs in the array
// 3 1 4 1 5    k=2
// output: 2       as the two pairs will be [1,3],[3,5]
#include<bits/stdc++.h>
using namespace std;
int bs( int arr[] , int n , int x){
    int i=0,j=n-1;
    while(i<=j){
        int mid=i+(j-i)/2;
        if( arr[mid]==x){
            return mid;
        }
        else if(arr[mid]<x){
            i=mid+1;
        }
        else{
            j=mid-1;
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
    int k;
    cout<<"Enter the difference : ";
    cin>>k;
    set<pair<int,int>>st;
    sort(arr,arr+n);
    for( int i=0 ; i<n; i++ ){
        if(bs(arr,n,arr[i]+k)!=-1){
            st.insert({arr[i],arr[i]+k});
        }
    }
    cout<<"the number of totalpairs will be : "<<st.size(); 
}