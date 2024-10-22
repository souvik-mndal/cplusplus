//WAP to find the number of 1's and 0's
// 0 0 1 1 1 1 0 0 1
// zero=4
// one=5 
#include<bits/stdc++.h>
using namespace std;
void count_0_1( int arr[] , int n ){
    int one=0 , zero=0 ;
    for( int i=0 ; i<n ; i++ ){
        if( arr[i]==0 ){
            zero++;
        } 
        else if( arr[i]==1){
            one++;
        }
        else{
            continue;
        }
    }
    cout<<"The total number of zeros are : "<<zero;
    cout<<"\nThe total number of ones are : "<<one;
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
    count_0_1( arr , n );
}