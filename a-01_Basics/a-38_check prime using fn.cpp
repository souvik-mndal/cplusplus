/*WAP to check prime or not*/
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
    cout<<"enter the number:";
    cin>>n;
    bool check = prime_check( n );
    if( check ){
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }
}