//WAP to print the counting from 1-N using fn
#include<bits/stdc++.h>
using namespace std;
void count( int n){
    for( int i=0 ; i<n ; i++){
        cout<<i+1<<" ";
    }
}
int main(){
    int num;
    cout<<"Enter the limit :";
    cin>>num;
    count( num );
}