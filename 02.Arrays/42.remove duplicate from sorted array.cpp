//WAP to return the number of unique elements from sorted array
// 0 0 1 1 1 2 2 3 3 4
// ans = 5 ( 0 1 2 3 4 )
#include<bits/stdc++.h>
using namespace std;
int unique( int arr[] , int n ){
    int i=0 , j=1 ;
    while( j<n ){
        if( arr[j]==arr[i] ){
            j++;
        }
        else{
            i++;
            arr[i]=arr[j];
            j++;
        }
    }
    return i+1;
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
    cout<<"The number of unique elements are :"<<unique( arr, n);
}