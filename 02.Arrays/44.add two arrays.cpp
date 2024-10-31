//WAP to add two arrays
#include<bits/stdc++.h>
using namespace std;
vector<int>addition( vector<int>arr1 , vector<int>arr2 ){
    int n=arr1.size()-1 , m=arr2.size()-1;
    vector<int>ans;
    int carry = 0;
    while( n>=0 && m>=0 ){
        int x = arr1[n] + arr2[m] + carry;
        ans.push_back( x % 10);
        carry = x / 10;
        n--;m--;
    }
    while( n>=0 ){
        int x = arr1[n] + carry;
        ans.push_back( x % 10);
        carry = x / 10;
        n--;
    }
    while( m>=0 ){
        int x = arr2[m] + carry;
        ans.push_back( x % 10);
        carry = x / 10;
        m--;
    }
    if( carry ){
        ans.push_back( carry );
    }
    reverse( ans.begin() , ans.end() );
    return ans;
}
int main(){
    vector<int>a1 = {1,0,1,1,1,1,0,1,0,1};
    vector<int>a2 = {1,0,1,0,1,1,1,0};
    vector<int>ans = addition( a1 , a2 );
    for( int i=0 ; i<ans.size() ; i++ ){
        cout<<ans[i]<<" ";
    }
}