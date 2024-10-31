//WAP to find the factorial of a large number 
#include<bits/stdc++.h>
using namespace std;
vector<int>factorial( int x ){
    vector<int>ans;
    int carry =0;
    ans.push_back( 1 );
    for( int i=2 ; i<=x ; i++ ){
        for( int j=0 ; j<ans.size() ; j++ ){
            int ele = i*ans[j]+carry;
            ans[j] =( ele % 10 );
            carry = ele / 10 ;
        }
        while( carry ){
            ans.push_back( carry % 10);
            carry = carry / 10 ;
        }
    }
    
    reverse( ans.begin() , ans.end() );
    return ans;
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    vector<int>ans = factorial( n );
    for( int i=0 ; i<ans.size() ;  i++ ){
        cout<<ans[i]<<" ";
    }
}