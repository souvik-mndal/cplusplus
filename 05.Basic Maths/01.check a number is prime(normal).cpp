#include<bits/stdc++.h>
using namespace std;
bool isprime( int n ){
    if( n<=1 ){
        return false;
    }
    for( int i=2 ; i<n ; i++ ){
        if( n % i==0 ){
            return false;
        }
    }
    return true;
}
int main(){
    int n ;
    cout<<"Enter the number : ";
    cin>>n;
    bool ans=isprime(n);
    if( ans ){
        cout<<"It's a prime number ";
    }
    else{
        cout<<"Its isn't a prime number ";
    }
}