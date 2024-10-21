//WAP to convert the temperature to farhen & kelvin using fn
#include<bits/stdc++.h>
using namespace std;
void convert( int n ){
    float f = ( 1.80 * n ) + 32;
    float k = 273.15 + n;
    cout<<"The value in farhenheit is : "<<f<<"\nThe value in kelvin is : "<<k;
}
int main(){
    int n ;
    cout<<"Enter the number : ";
    cin>>n;
    convert( n );
}