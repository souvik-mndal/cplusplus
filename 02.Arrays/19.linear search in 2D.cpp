//WAP to find the target value in a 2D array
#include<bits/stdc++.h>
using namespace std;
void lin_srch( int arr[][3] , int n , int k ){
    bool flag=0;
    for( int i=0 ; i<n ; i++ ){
        for( int j=0 ; j<n ; j++ ){
            if( arr[i][j]==k ){
                flag=1;
                cout<<"The target value is present at index row : "<<i<<" and column "<<j;
            }
        }
    }
    if( flag==0 ){
        cout<<"The target element not found";
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
    int k;
    cout<<"What value you want to find : ";
    cin>>k;
    lin_srch( arr , 3 , k );
}
