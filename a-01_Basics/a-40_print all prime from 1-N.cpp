/*WAP to print the primes from 1-N*/
#include<bits/stdc++.h>
using namespace std;
bool prime_check( int n ){
    for( int i=2 ; i<=sqrt( n ) ; i++){
        if( n % i == 0 ){
            return false;
        }
    }
    return true;
}
int main(){
    float n;
    cout<<"enter the number upto which you want to find :";
    cin>>n;
    for( int i=0 ; i<n ; i++){
        bool check = prime_check( i );
        if( check ){
            cout<<i<<" ";
        }
    }
}