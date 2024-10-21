//WAP to count all the set bits using fn
#include<bits/stdc++.h>
using namespace std;
int count( int n ){
    int cnt=0 ;
    while( n!=0 ){
        int rem = n%2;
        if( rem==1 ){
            cnt++;
        }
        n/=2;
    }
    return cnt;
}
int main(){
    int n ;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"The number og set bits are :"<<count( n );
}