// WAP to find the quotient of two numbers
// input: 6(divisor)      36(divident)
// output:6(quotient)
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
int main(){
    int divis,dividen;
    cout<<"Enter the divisor and divident : ";
    cin>>divis>>dividen;
    int ans=divide(abs(divis),abs(dividen));;
    if((divis<0 && dividen>0)||(divis>0 && dividen<0)){
        ans*=-1;
    }
    cout<<"the quotient is : "<<ans;
}