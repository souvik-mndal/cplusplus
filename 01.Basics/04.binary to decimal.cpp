//WAP to convert binary to decimal
#include<bits/stdc++.h>
using namespace std;
int bin_to_dec( int n ){
    int decimal = 0;
    int i=0;
    while( n != 0 ){
        decimal = (pow( 2 , i++ ) * (n%10))+decimal ;
        n /= 10;
    }
    return decimal;
}
int main(){
    int number;
    cout<<"enter the number in binary : ";
    cin>>number;
    cout<<"the decimal value is : "<<bin_to_dec( number ) ;
}