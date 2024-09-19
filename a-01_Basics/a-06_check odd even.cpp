//WAP to check if the number is odd or even
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num ;
    cout <<"Enter the number : " ;
    cin >>num ;
    if( num & 1 ){
        cout <<"Odd" ;
    }
    else{
        cout <<"Even" ;
    }
}