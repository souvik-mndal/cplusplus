//WAP to search a number using binary search in 2D array
#include<bits/stdc++.h>
using namespace std;
bool search( int arr[][3],int r,int c,int x){
    int tot=r*c;
    int i=0,j=tot-1;
    while(i<=j){
        int mid=i+(j-i)/2;
        int nw_i=mid/c;
        int nw_j=mid%c;
        int ele=arr[nw_i][nw_j];
        if(ele==x){
            return true;
        }
        else if(ele<x){
            i=mid+1;
        }
        else{
            j=mid-1;
        }
    }
    return false;
}
int main(){
    int arr[3][3];
    for( int i=0 ; i<3 ; i++ ){
        for( int j=0 ; j<3 ; j++ ){
            cout<<"enter the value for row "<<i<<" and column "<<j<<" : ";
            cin>>arr[i][j];
        }
    }
    int x;
    cout<<"Enter the target element : ";
    cin>>x;
    int ans=search(arr,3,3,x);
    if( ans ){
        cout<<"The target element is found";
    }
    else{
        cout<<"The target element is not found";
    }
}
