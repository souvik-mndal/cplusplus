//WAP to print the 2D array 
#include<bits/stdc++.h>
using namespace std;
void print_2d( int arr[][3] , int n ){
    for( int i=0 ; i<n ; i++ ){
        for( int j=0 ; j<n ; j++ ){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
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
    print_2d( arr, 3);
}