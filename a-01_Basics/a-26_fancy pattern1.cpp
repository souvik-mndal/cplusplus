/*WAP to print the fancy pattern
1
2 * 2
3 * 3 * 3 
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cout <<"Enter the number of rows : " ;
    cin >>n ;
    for( int i=0 ; i<n ; i++){
        for( int j=0 ; j<=2*i ; j++){
            if( j&1 ){
                cout <<"*"<<" ";
            }
            else{
                cout<<i+1<<" ";
            }
        }
        cout<<endl;
    }
}