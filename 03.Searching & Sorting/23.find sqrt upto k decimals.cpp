//WAP to find the square root for the given number upto k decimals
#include<bits/stdc++.h>
using namespace std;
int sqroot( int n ){
    int s=0,e=n-1;
    int ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(mid*mid<=n){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;
}
double precision( int n , int k){
    int sqans=sqroot(n);
    double ans=sqans;
    double step=0.1;
    for( int i=0 ; i<k ; i++){
        double j=ans;
        while(j*j<=n){
            ans=j;
            j+=step;
        }
        step/=10;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the number to find the square root : ";
    cin>>n;
    
    int k;
    cout<<"Enter the number of decimals you want : ";
    cin>>k;
    cout<<"the square root is : "<<precision(n,k);
}