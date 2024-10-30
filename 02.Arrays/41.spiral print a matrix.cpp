//WAP to print the matrix in a spiral form 
// 1  2  3  4 
// 5  6  7  8
// 9  10 11 12
// 13 14 15 16
// ans = 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
#include<bits/stdc++.h>
using namespace std;
void spiral( int arr[][4] , int n ){
    int row=n , col=n ;
    int total = row*col ;
    int s_r=0 , s_c=0 , e_r=row-1 , e_c=col-1 ;
    int cnt=0 ;
    while( cnt<total ){
        for( int i=s_c ; i<=e_c && cnt<total ; i++ ){
            cout<<arr[s_r][i]<<" ";
            cnt++;
        }
        s_r++;
        for( int i=s_r ; i<=e_r && cnt<total ; i++ ){
            cout<<arr[i][e_c]<<" ";
            cnt++;
        }
        e_c--;
        for( int i=e_c ; i>=s_c && cnt<total ; i-- ){
            cout<<arr[e_r][i]<<" ";
            cnt++;
        }
        e_r--;
        for( int i=e_r ; i>=e_r && cnt<total ; i-- ){
            cout<<arr[i][s_c]<<" ";
            cnt++;
        }
        s_c++;
    }
}
int main(){
    int arr[][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    spiral( arr , 4 );
}