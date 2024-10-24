//WAP to find the diagonal sum in 2D array 
// 1 2 3
// 4 5 6
// 7 8 9
// ans = 1+5+9=>15
#include<bits/stdc++.h>
using namespace std;
void dia_sum( int arr[][3] , int n ){
    int sum=0 ;
    for(int i=0 ; i<n ; i++ ){
        sum+=arr[i][i];
    }
    cout<<"Sum for the diagonal is : "<<sum<<endl;
}
int main(){
    int arr[3][3];
    for( int i=0 ; i<3 ; i++ ){
        for( int j=0 ; j<3 ; j++ ){
            cout<<"enter the value for row "<<i<<" and column "<<j<<" : ";
            cin>>arr[i][j];
        }
    }
    dia_sum( arr , 3 );
}