//WAP to print the floyd's triangle pattern
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;
    int ele=1;
    for( int i=0 ; i<n ; i++ ){
        for( int j=0 ; j<=i ; j++ ){
            cout<<ele++<<" ";
        }
        cout<<endl;
    }
}