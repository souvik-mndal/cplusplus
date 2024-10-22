//WAP to convert the km value into miles using fn
#include<bits/stdc++.h>
using namespace std;
float convert( int n ){
    float ans = n * 0.621371;
    return ans;
}
int main(){
    int n ;
    cout<<"Enter the number in km : ";
    cin>>n;
    cout<<"The value in miles is : "<<convert( n );
}