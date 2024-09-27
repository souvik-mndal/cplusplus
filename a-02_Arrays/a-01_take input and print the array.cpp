/*WAP to take input in an array and print it*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the limit: ";
    cin>>n;
    int arr[n];
    for( int i=0 ; i<n ; i++){
        cout<<"enter the input element for index "<<i<<": "<<endl;
        cin>>arr[i];
    }
    for( int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}