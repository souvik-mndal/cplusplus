//WAP to check if a number is even or odd
#include<bits/stdc++.h>
using namespace std;
void even_odd( int n ){
    if( n&1 ){
        cout<<"Odd";
    }
    else{
        cout<<"Even";
    }
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    even_odd( n );
}