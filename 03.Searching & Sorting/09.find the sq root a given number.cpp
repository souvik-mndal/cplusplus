// WAP to find the sq root of a given number 
// input:64
// output:8
#include<bits/stdc++.h>
using namespace std;
int sqr( int n ){
    int i=0,j=n;
    int ans=-1;
    while(i<=j){
        int mid=i+(j-i)/2;
        if( mid*mid<=n){
            ans=mid;
            i=mid+1;
        }
        else{
            j=mid-1;
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"The sq root is : "<<sqr(n);
}