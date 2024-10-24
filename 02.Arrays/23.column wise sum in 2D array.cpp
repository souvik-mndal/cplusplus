//WAP to find the column wise sum in a 2D array
// 1 2 3
// 4 5 6
// 7 8 9
// ans =  col1=12 col2=15 col3=18
#include<bits/stdc++.h>
using namespace std;
void col_sum( int arr[][3] , int n ){
    for(int i=0 ; i<n ; i++ ){
        int sum=0 ;
        for( int j=0 ; j<n ; j++ ){
            sum+=arr[j][i];
        }
        cout<<"Sum for the col "<<i<<" : "<<sum<<endl;
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
    col_sum( arr , 3 );
}