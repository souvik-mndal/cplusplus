/*WAP to print all the digits*/
#include<bits/stdc++.h>
using namespace std;
void num( long long int  n ){
    while( n != 0 ){
        cout<< n%10 <<" ";
        n /= 10 ;
    }
}
int main(){
    long long int n;
    cout<<"Enter the number : ";
    cin>>n;
    num( n );
}