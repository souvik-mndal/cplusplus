//WAP to double the value of an array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10];
    for( int i=0 ; i<10 ; i++ ){
        cout<<"enter the value for index "<<i<<" : ";
        cin>>arr[i];
    }
    for( int i=0 ; i<10 ; i++ ){
        cout<<2*arr[i]<<" ";
    }
}