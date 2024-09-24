/*WAP to convert the temperature from celsius to farheneit and kelvin*/
#include<bits/stdc++.h>
using namespace std;
void convert( double n ){
    double kel = 273.15 + n ;
    double farhen = (n * 1.80 ) + 32 ;
    cout<<"after the conversion : "<<kel<<","<<farhen;
}
int main(){
    double n;
    cout<<"enter the value in celsius :";
    cin>>n;
    convert( n );
}