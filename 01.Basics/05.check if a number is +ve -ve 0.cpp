//WAP to check if a number is +ve -ve or 0
#include<bits/stdc++.h>
using namespace std;
int main(){
    int number;
    cout<<"enter the number : ";
    cin>>number;
    if( number > 0 ){
        cout<<"Positive";
    }
    else if( number<0){
        cout<<"Negative";
    }
    else{
        cout<<"Zero";
    }
}