//WAP to find the first occourence of the target element
// 10 20 30 30 30 30 30 40 50        target = 30
// ans = 2( index)
#include<bits/stdc++.h>
using namespace std;
int first_occ( int arr[] , int n , int x ){
    int s=0 , e=n-1;
    int ans = -1 ;
    while( s<=e ){
        int mid = s+(e-s)/2;
        if( arr[mid]==x ){
            ans=mid;
            e=mid-1;
        }
        else if( arr[mid]<x ){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;
}
int main(){
    
}