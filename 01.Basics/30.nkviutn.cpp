//WAP to check if a number is prime or not using fn
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
    cout<<"Enter the number : ";
    cin>>num;
    bool ans = isprime( num );
    if( ans ){
        cout<<"Prime";
    }
    else{
        cout<<"Not prime";
    }
}