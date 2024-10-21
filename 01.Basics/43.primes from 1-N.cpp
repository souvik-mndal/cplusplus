//WAP to print all primes from 1-N using fn
#include<bits/stdc++.h>
using namespace std;
bool isprime( int n ){
    if( n<=1 ){
        return false;
    }
    for( int i=2 ; i<=sqrt(n) ; i++ ){
        if( n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int num;
    cout<<"Enter the limit : ";
    cin>>num;
    for( int i=1 ; i<=num ; i++ ){
        bool ans=isprime( i );
        if( ans ){
            cout<<i<<" ";
        }
    }
}