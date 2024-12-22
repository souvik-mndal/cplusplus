#include<bits/stdc++.h>
using namespace std;
long long expo( int a , int b ){
    long long ans = 1 ;
    while( b>0 ){
        if(b&1){
            ans = ans*a;
        }
        a=a*a;
        b=b>>1;
    }
    return ans;  
}
int main(){
    int a,b;
    cout<<"Enter the number : ";
    cin>>a;
    cout<<"Enter the power : ";
    cin>>b;
    cout<<expo(a,b);
}