//WAP to create an number with inputs using fn
#include<bits/stdc++.h>
using namespace std;
void creating_no( int k ){
    int ans=0;
    for( int i=0 ; i<k ; i++ ){
        int ele;
        cout<<"Enter the number : ";
        cin>>ele;
        ans = ( ans * 10 ) + ele;
    }
    cout<<"The number is : "<<ans;
}
int main(){
    int k ;
    cout<<"Enter the number of element you want to take : ";
    cin>>k;
    creating_no( k );
}