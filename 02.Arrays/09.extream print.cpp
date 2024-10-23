//WAp to print the extreams of an array
// 10 20 30 40 50 60 
// ans= 10 60 20 50 30 40
#include<bits/stdc++.h>
using namespace std;
void print_extream( int arr[] , int n ){
    int s=0 , e=n-1 ;
    while( s<=e ){
        if( s==e ){
            cout<<arr[s];
        }
        else{
            cout<<arr[s]<<" "<<arr[e]<<" ";
        }
        s++;e--;
    }
}
int main(){
    int n;
    cout<<"Enter the total number you want to take for an array: ";
    cin>>n;
    int arr[n];
    for( int i=0 ; i<n ; i++ ){
        cout<<"enter the value for index "<<i<<" : ";
        cin>>arr[i];
    }
    print_extream( arr , n );
}