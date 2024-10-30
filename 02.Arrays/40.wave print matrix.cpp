//WAP to print the matrix lika a wave 
// 1 2 3 
// 4 5 6 
// 7 8 9
// ans = 1 4 7 8 5 2 3 6 9
#include<bits/stdc++.h>
using namespace std;
void print( int arr[][3] , int n ){
    for( int j=0 ; j<n ; j++ ){
        if( j & 1 ){
            for( int i=n-1 ; i>=0 ; i-- ){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for( int i=0 ; i<n ; i++ ){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}
int main(){
    int arr[3][3];
    for( int i=0 ; i<3 ; i++ ){
        for( int j=0 ; j<3 ; j++ ){
            cout<<"enter the value for row "<<i<<" and column "<<j<<" : ";
            cin>>arr[i][j];
        }
    }
    print( arr , 3 );
}