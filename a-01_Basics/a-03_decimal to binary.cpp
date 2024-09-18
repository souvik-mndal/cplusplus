//WAP to convert decimal to binary
#include<bits/stdc++.h>
using namespace std;
int dec_to_bin( int n ){
    int ans = 0;
    int i = 0 ;
    while( n != 0 ){
        ans = ans + ((n % 2) * pow(10,i++)); 
        n /= 2 ;
    }
    return ans ;
}
int main(){
    int num ;
    cout <<"Enter the number : ";
    cin >>num;
    cout <<"The binary value is : "<<dec_to_bin( num );
}