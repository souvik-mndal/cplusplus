/*WAP to print inverted numeric half pyramid pattern
1 2 3 4
1 2 3
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
        for( int j=0 ; j<n-i ; j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}