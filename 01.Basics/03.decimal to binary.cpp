//WAP to convert decimal to binary
#include<bits/stdc++.h>
using namespace std;
int dec_to_bin( int n ){
    int binary = 0;
    int i=0;
    while( n != 0 ){
        binary = (pow( 10 , i++ ) * (n%2))+binary ;
        n /= 2;
    }
    return binary;
}
int main(){
    int number;
    cout<<"enter the number : ";
    cin>>number;
    cout<<"the binary value is : "<<dec_to_bin( number ) ;
}