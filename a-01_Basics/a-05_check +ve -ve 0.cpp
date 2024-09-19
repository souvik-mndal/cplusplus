//WAP to check if the number is +ve -ve or 0
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num ;
    cout <<"Enter the number : " ;
    cin >>num ;
    if( num > 0 ){
        cout <<"Positive" ;
    }
    else if( num < 0 ){
        cout <<"Negative" ;
    }
    else{
        cout <<"Zero" ;
    }
}