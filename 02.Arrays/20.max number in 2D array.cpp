//WAP to find the max number in a 2D array
#include<bits/stdc++.h>
using namespace std;
int maxi( int arr[][3] , int n ){
    int ans = arr[0][0];
    for( int i=0 ; i<n ; i++ ){
        for( int j=0 ; j<n ; j++ ){
            if( ans < arr[i][j]){
                ans = arr[i][j];
            }
        }
    }
    return ans;
}
int main(){
    int arr[3][3];
    for( int i=0 ; i<3 ; i++ ){
        for( int j=0 ; j<3 ; j++ ){
            cout<<"enter the value for row "<<i<<" and column "<<j<<" : ";
            cin>>arr[i][j];
        }
    }
    cout<<"The max element is : "<<maxi( arr , 3 );
}