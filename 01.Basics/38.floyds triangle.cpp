//WAP to print the floyd's triangle pattern
// 1
// 2 3
// 4 5 6
// 7 8 9 10
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