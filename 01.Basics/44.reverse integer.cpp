//WAP to reverse an intger using fn
#include<bits/stdc++.h>
using namespace std;
int rev_int( int n ){
    int ans=0;
    while( n!=0 ){
        ans = ( ans * 10 ) + ( n % 10 );
        n/=10;
    }
    return ans;
}
int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    cout<<"The reversed value is : "<<rev_int( num );
}