/*WAP to print numeric palindrome pattern
      1
    1 2 1 
  1 2 3 2 1 
1 2 3 4 3 2 1
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cout <<"Enter the number of rows : " ;
    cin >>n ;
    for( int i=0 ; i<n ; i++){
        for( int j=0 ; j<n-i-1 ; j++){
            cout <<"  ";
        }
        for( int j=0 ; j<=i ; j++){
            cout<<j+1<<" ";
        }
        for( int j=i ; j>=1 ; j-- ){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}