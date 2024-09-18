//WAP to convert binary to decimal 
#include<bits/stdc++.h>
using namespace std;
int bin_to_dec( int n ){
    int ans = 0;
    int i = 0 ;
    while( n != 0 ){
        ans = ans + ((n % 10) * pow(2,i++)); 
        n /= 10 ;
    }
    return ans ;
}
int main(){
    int num ;
    cout <<"Enter the number : ";
    cin >>num;
    cout <<"The decimal value is : "<<bin_to_dec( num );
}