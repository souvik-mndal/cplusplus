//WAP to print the numeric hollow half pyramid pattern
// 1
// 1 2
// 1   3
// 1 2 3 4
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;
    for( int i=0 ; i<n ; i++){
        for( int j=0 ; j<=i ; j++){
            if( j==0 || i==n-1 || j==i ){
                cout<<j+1<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}