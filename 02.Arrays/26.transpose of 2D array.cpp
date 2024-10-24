//WAP to print the transpose of a 2D array
#include<bits/stdc++.h>
using namespace std;
void transpose( int arr[][3] , int n ){
    for( int i=0 ; i<n ; i++ ){
        for( int j=i ; j<n ; j++ ){
            swap( arr[i][j] , arr[j][i]);
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
    transpose( arr , 3 );
    for( int i=0 ; i<3 ; i++ ){
        for( int j=0 ; j<3 ; j++ ){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}