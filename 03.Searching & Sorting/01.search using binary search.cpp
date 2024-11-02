//WAP to search a target element using binary search
#include<bits/stdc++.h>
using namespace std;
int BS( int arr[] , int n , int x ){
    int s=0 , e=n-1;
    while( s<=e ){
        int mid = s=(e-s)/2;
        if( arr[mid]==x ){
            return mid;
        }
        else if( arr[mid]<x ){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return -1;
}
int main(){

}