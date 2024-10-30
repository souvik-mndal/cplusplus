//WAP to find the maximum average subarray
// 1 12 -5 -6 50 3       window size = 4
// ans = 12.5( 12 -5 -6 50 )
#include<bits/stdc++.h>
using namespace std;
double avg( int arr[] , int n , int k ){
    int x=0 , y=k , sum=0 , maxi=-1 ;
    for( int i=0 ; i<y ; i++ ){
        sum+=arr[i];
    }
    maxi = sum ;
    while( y<n ){
        sum = sum + arr[y++] - arr[x++];
        maxi = max( maxi , sum );
    }
    double ans = maxi/(double)k;
    return ans;
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
    int k;
    cout<<"Enter the size of the window : ";
    cin>>k;
    cout<<"The maximum average subarray is :"<<avg( arr, n , k );
}