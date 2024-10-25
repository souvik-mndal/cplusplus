//WAP to sort 0 1 and 2 in an array
// 2 0 2 1 1 0
// ans= 0 0 1 1 2 2
#include<bits/stdc++.h>
using namespace std;
void sort_012( int arr[] , int n ){
    int i=0 , j=n-1 , x=0;
    while( x<j ){
        if( arr[x]==0 ){
            swap( arr[x] , arr[i]);
            x++;i++;
        }
        else if( arr[x]==2 ){
            swap( arr[x] , arr[j]);
            j--;
        }
        else{
            x++;
        }
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
    sort_012( arr, n);
    for( int i=0 ; i<n ; i++ ){
        cout<<arr[i]<<" ";
    }
}