/*WAP to check odd or even*/
#include<bits/stdc++.h>
using namespace std;
bool odd_even( int n ){
    if( n & 1 ){
        return true;
    }
    return false;
}
int main(){
    float n;
    cout<<"enter the number:";
    cin>>n;
    bool check = odd_even( n );
    if( check ){
        cout<<"odd";
    }
    else{
        cout<<"even";
    }
}