//WAP to find the sum of number from 1-N
#include<bits/stdc++.h>
using namespace std;
int sum( int n ){
    int ans = 0 ;
    for( int i=1 ; i<=n ; i++ ){
        ans += i;
    }
    return ans;
}
int main(){
    int n ;
    cout<<"Enter the limit : ";
    cin>>n;
    cout<<"The addition of all number are : "<<sum( n );
}