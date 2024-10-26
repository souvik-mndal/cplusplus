//WAP to rotate the 2D array by 90 degree
// 1 2 3
// 4 5 6
// 7 8 9
// ans = 7 4 1
//       8 5 2
//       9 6 3
#include<bits/stdc++.h>
using namespace std;
void rotate_90( vector<vector<int>>&arr ){
    int n= arr.size();
    for( int i=0 ; i<n ; i++ ){
        for( int j=i+1 ; j<n ; j++ ){
            swap( arr[i][j] , arr[j][i]);
        }
    }
    for( int i=0 ; i<n ; i++ ){
        reverse( arr[i].begin() , arr[i].end());
    }
    
}
int main(){
    vector<vector<int>>arr = {{1,2,3},{4,5,6},{7,8,9}};
    rotate_90( arr );
    int n= arr.size();
    for( int i=0 ; i<n ; i++ ){
        for( int j=0 ; j<n ; j++ ){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}