/*WAP to print inverted hollow  pyramid pattern

*           *
  *       *
    *   * 
      *
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cout <<"Enter the number of rows : " ;
    cin >>n ;
    for( int i=0 ; i<n ; i++){
        for( int j=0 ; j<i ; j++){
            cout <<"  ";
        }
        for( int j=0 ; j<(2*n)-(2*i)-1 ; j++){
            if( j==0 || j==(2*n)-(2*i)-2){
                cout<<"* ";
            }    
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}