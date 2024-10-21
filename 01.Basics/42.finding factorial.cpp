//WAP to find the factorial using fn
#include<bits/stdc++.h>
using namespace std;
int facto( int n ){
    int ans =1;
    for( int i=1 ; i<=n ; i++ ){
        ans*=i;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"the facatorial of the number is : "<<facto( n );
}