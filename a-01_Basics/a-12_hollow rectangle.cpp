/*WAP to print hollow rectangle pattern
* * * *
*     *
* * * *
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,c ;
    cout <<"Enter the number of rows and coln : " ;
    cin >>r>>c ;
    for( int i=0 ; i<r ; i++){
        for( int j=0 ; j<c ; j++){
            if( i==0 || j==0 || i==r-1 || j==c-1){
                cout<<"*"<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}