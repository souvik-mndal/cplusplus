/*WAP to set the Kth bit 
input->10 k=2
output->14
*/
#include<bits/stdc++.h>
using namespace std;
int k_th( int n , int k ){
    return ( n | ( k << 1 ));
}
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    int k;
    cout<<"enter the kth value you want to change :";
    cin>>k;

    cout<<"the ans is : "<<k_th( n , k );
}