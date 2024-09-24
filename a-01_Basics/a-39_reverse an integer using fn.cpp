/*WAP to reverse an integer*/
#include<bits/stdc++.h>
using namespace std;
int reverse_num( int n ){
    int ans = 0 ;
    while( n != 0){
        ans = ( ans * 10 ) + ( n % 10 );
        n /= 10 ;
    }
    return ans;
}
int main(){
    float n;
    cout<<"enter the number:";
    cin>>n;
    cout<<"the reverse is : "<<reverse_num( n );
}