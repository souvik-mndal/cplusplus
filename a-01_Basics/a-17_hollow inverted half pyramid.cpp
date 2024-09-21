/*WAP to print hollow inverted half pyramid pattern
* * * *
*   * 
* * 
* 
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cout <<"Enter the number of rows : " ;
    cin >>n ;
    for( int i=0 ; i<n ; i++){
        for( int j=0 ; j<n-i ; j++){
            if( i==0 || j==0 || j==n-i-1){
                cout<<"*"<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}