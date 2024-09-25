/*WAP to find the max of 3 numbers using fn*/
#include<bits/stdc++.h>
using namespace std;
int maximum( int a , int b , int c ){
    return max( {a,b,c} );
}
int main(){
    int a,b,c ;
    cout <<"Enter the 3 numbers :";
    cin>>a>>b>>c;
    cout<<"the maximum of 3 num is : "<<maximum( a , b, c);
}