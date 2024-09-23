/*WAP to print numeric hollow inverted half pyramid pattern
1 2 3 4
1   3 
1 2 
1 
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cout <<"Enter the number of rows : " ;
    cin >>n ;
    for( int i=0 ; i<n ; i++){
        for( int j=i ; j<n ; j++){
            if( i==0 || j==i || j==n-1){
                cout<<j+1<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}