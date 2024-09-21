/*WAP to print hollow full pyramid pattern
      *
    *   * 
  *       * 
* * * * * * *
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
        for( int j=0 ; j<(2*i)+1 ; j++){
            if( i==n-1 || j==0 || j==2*i){
                cout<<"*"<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}