/*WAP to count all the set bits*/
#include<bits/stdc++.h>
using namespace std;
int count_set( int n ){
    int count = 0 ;
    while( n != 0 ){
        int digit = n%2;
        if( digit == 1){
            count++;
        }
        n /= 2;
    }
    return count;
}
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    cout<<"the number of set bits present are : "<<count_set( n );
}