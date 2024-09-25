/*WAP to create number by taking digits using fn*/
#include<bits/stdc++.h>
using namespace std;
void num( long long int n ){
    int ans = 0 ;
    for( int i=0 ; i<n ; i++ ){
        int ele;
        cout<<"Enter the digit : "<<endl;
        cin>>ele;
        ans = ans * 10 + ele ;
    }
    cout<<"the final number is : "<<ans;
}
int main(){
    long long int n;
    cout<<"Enter the size of the digit you want to make : ";
    cin>>n;
    num( n );
}