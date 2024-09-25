/*WAP to find the sum of 3 numbers*/
#include<bits/stdc++.h>
using namespace std;
int sum( int a , int b , int c ){
    return ( a+b+c );
}
int main(){
    int a,b,c ;
    cout <<"Enter the 3 numbers :";
    cin>>a>>b>>c;
    cout<<"the sum of 3 num is : "<<sum( a , b, c);
}