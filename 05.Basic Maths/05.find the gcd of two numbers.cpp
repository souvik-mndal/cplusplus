#include<bits/stdc++.h>
using namespace std;
int gcd( int a , int b ){
    while( a>0 && b>0 ){
        if( a>b ){
            a=a%b;
        }
        else{
            b=b%a;
        }
    }
    if( a==0 ){
        return b;
    }
    return a;
}
int main(){
    int a,b;
    cout<<"Enter the two numbers : ";
    cin>>a>>b;
    cout<<gcd(a,b);
}