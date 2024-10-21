//WAP to set the kth bit using fn
#include<bits/stdc++.h>
using namespace std;
int set_kth( int n , int k ){
    return (n | (1<<k));
}
int main(){
    int n;
    cout<<"Enter the value : ";
    cin>>n;
    int k ;
    cout<<"Enter the bit number which you want to filp : ";
    cin>>k;
    cout<<"after fliping the value the number is : "<<set_kth( n , k);
}