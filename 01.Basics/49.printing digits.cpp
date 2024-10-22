//WAP to print the digits using fn
#include<bits/stdc++.h>
using namespace std;
void print_digit( int n ){
    while( n != 0 ){
        cout<<n%10<<" ";
        n/=10;
    }
}
int main(){
    int n ;
    cout<<"Enter the number : ";
    cin>>n;
    print_digit( n );
    
}