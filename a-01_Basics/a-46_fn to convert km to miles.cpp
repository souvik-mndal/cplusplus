/*WAP to convert km to miles*/
#include<bits/stdc++.h>
using namespace std;
double km_mile( double n ){
    double mile = n * 0.621371 ;
    return mile;
}
int main(){
    double n;
    cout<<"Enter the value of KM : ";
    cin>>n;
    cout <<"The value in mile is : " <<km_mile( n );
}