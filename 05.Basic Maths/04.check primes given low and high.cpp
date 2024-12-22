//input : 100(low) 130(high)
//output :  
#include<bits/stdc++.h>
using namespace std;
vector<bool>seive( int n ){
    vector<bool>ans(n+1,1);
    ans[0]=ans[1]=0;
    for( int i=2 ; i<=sqrt(n) ; i++ ){
        if( ans[i] ){
            int j=i*i;
            while( j<=n ){
                ans[j]=0;
                j+=i;
            }
        }
    }
    return ans;
}
vector<bool>segmentedseive( int low , int high ){
    vector<bool>check=seive(sqrt(high));
    vector<int>primes;
    for( int i=0 ; i<=sqrt(high) ; i++ ){
        if( check[i] ){
            primes.push_back(i);
        }
    }
    vector<bool>ss(high-low+1,1);
    if(low==1){
        ss[0]=0;
    }
    for( auto prime:primes ){
        int first_mul = (low/prime)*prime;
        if( first_mul<low){
            first_mul+=prime;
        }
        int j=max(first_mul,prime*prime);
        while(j<=high){
            ss[j-low]=0;
            j+=prime;
        }
    }
    return ss;
}
int main(){
    int l,h ;
    cout<<"Enter the lower and the higher range : ";
    cin>>l>>h;
    vector<bool>ans=segmentedseive(l,h);
    for( int i=0 ; i<ans.size() ; i++ ){
        if( ans[i] ){
            cout<<i+l<<" ";
        }
    }
}