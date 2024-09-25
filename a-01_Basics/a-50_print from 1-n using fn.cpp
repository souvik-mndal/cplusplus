/*WAP to print from 1-n*/
#include<bits/stdc++.h>
using namespace std;
void printing( int n ){
    for( int i=1 ; i<=n ; i++ ){
        cout<<i<<" ";
    }
}
int main(){
    int a ;
    cout <<"Enter the number upto which you want to print :";
    cin>>a;
    printing( a );
}