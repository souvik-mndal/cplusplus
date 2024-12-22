//find all the primes upto n
//input : 10
//output : 2 3 5 7 
#include<bits/stdc++.h>
using namespace std;
vector<bool>prime( int n ){
    vector<bool>seive( n+1 , 1 );
    seive[0]=seive[1]=0;
    for( int i=2 ; i<=sqrt(n) ; i++ ){
        if( seive[i] ){
            int j=i*i;
            while(j<=n){
                seive[j]=0;
                j+=i;
            }
        }
    }
    return seive;
}
int main(){
    int n ;
    cout<<"Enter the number : ";
    cin>>n;
    vector<bool>ans=prime(n);
    for( int i=0 ; i<=n ; i++ ){
        if( ans[i] ){
            cout<<i<<" ";
        }
    }
}