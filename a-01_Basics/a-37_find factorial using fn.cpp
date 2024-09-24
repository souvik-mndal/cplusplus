/*WAP to find the factorial*/
#include<bits/stdc++.h>
using namespace std;
long long int facto_find( int n ){
    long long ans = 1;
    for( int i=1 ; i<=n ; i++){
        ans *= i ;
    }
    return ans;
}
int main(){
    float n;
    cout<<"enter the number:";
    cin>>n;
    cout<<"the factorial is : "<<facto_find( n );
}