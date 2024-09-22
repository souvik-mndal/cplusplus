/*WAP to print the fancy pattern
A
A B A
A B C B A
A B C D C B A
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cout <<"Enter the number of rows : " ;
    cin >>n ;
    for( int i=0 ; i<n ; i++){
        for( int j=0 ; j<=i ; j++){
            char ch = 'A' + j ;
            cout <<ch<<" ";
        }
        for( int j=i ; j>0 ; j--){
            char ch = 'A' + j - 1;
            cout <<ch<<" ";
        }

        cout<<endl;
    }
}