/*WAP to find the sum of all even number upto n */
#include<bits/stdc++.h>
using namespace std;
int sum( int n ){
    int ans = 0 ;
    for( int i=2 ; i<=n ; i+=2 ){
        ans += i ;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the end limit number ";
    cin>>n;
    cout<<"Tne total sum is : "<<sum( n );
}