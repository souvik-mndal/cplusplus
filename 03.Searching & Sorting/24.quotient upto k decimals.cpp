//WAP to find the square root for the given number upto k decimals
#include<bits/stdc++.h>
using namespace std;
int divide( int divis , int dividen){
    int i=0,j=dividen;
    int ans=-1;
    while(i<=j){
        int mid=i+(j-i)/2;
        if(mid*divis<=dividen){
            ans=mid;
            i=mid+1;
        }
        else{
            j=mid-1;
        }
    }
    return ans;
}
double precision( int divis , int dividen , int k){
    int divans=divide(divis,dividen);
    double ans=divans;
    double step=0.1;
    for( int i=0 ; i<k ; i++){
        double j=ans;
        while(divis*j<=dividen){
            ans=j;
            j+=step;
        }
        step/=10;
    }
    return ans;
}
int main(){
    int divis,dividen;
    cout<<"Enter the divisor and divident : ";
    cin>>divis>>dividen;
    int k;
    cout<<"Enter the number of decimals you want : ";
    cin>>k;
    double ans=precision(abs(divis),abs(dividen),k);;
    if((divis<0 && dividen>0)||(divis>0 && dividen<0)){
        ans*=-1;
    }
    cout<<fixed << setprecision(k)<<"the quotient is : "<<ans;
}