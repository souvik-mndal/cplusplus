//WAP to find the maximum number of 1's in a 2D array
// 1 1 1
// 1 0 0
// 0 1 1
// ans = max 1's in row 1
#include<bits/stdc++.h>
using namespace std;
int max_1( int arr[][3] , int n ){
    int maxi=-1;
    int row=-1;
    for( int i=0 ; i<n ; i++ ){
        int cnt=0;
        for( int j=0  ; j<n ; j++ ){
            if( arr[i][j] == 1 ){
                cnt++;
            }
        }
        if( maxi<cnt ){
            maxi=cnt;
            row=i;
        }
    }
    return row+1;
}
int main(){
    int arr[3][3];
    for( int i=0 ; i<3 ; i++ ){
        for( int j=0 ; j<3 ; j++ ){
            cout<<"enter the value for row "<<i<<" and column "<<j<<" : ";
            cin>>arr[i][j];
        }
    }
    cout<<"The max number of 1's is present at row : "<<max_1( arr , 3 );
}