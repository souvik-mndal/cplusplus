//WAP to find the rowwise sum in a 2D array
// 1 2 3
// 4 5 6
// 7 8 9
// ans =  row1=6 row2=15 row3=24
#include<bits/stdc++.h>
using namespace std;
void row_sum( int arr[][3] , int n ){
    for(int i=0 ; i<n ; i++ ){
        int sum=0 ;
        for( int j=0 ; j<n ; j++ ){
            sum+=arr[i][j];
        }
        cout<<"Sum for the row "<<i<<" : "<<sum<<endl;
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
    row_sum( arr , 3 );
}