//WAP to print the pascals triangle pattern
// 1
// 1 1
// 1 2 1
// 1 3 3 1
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;
    for( int i=1 ; i<=n ; i++ ){
        int c=1;
        for( int j=1 ; j<=i ; j++ ){
            cout<<c<<" " ;
            c=c*(i-j)/j;
        }
        cout<<endl;
    }
}