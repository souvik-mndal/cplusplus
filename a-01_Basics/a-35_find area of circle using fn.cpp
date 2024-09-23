/*WAP to find the area of the circle*/
#include<bits/stdc++.h>
using namespace std;
float area_circle( float n ){
    return ( 3.1415*n*n) ;
}
int main(){
    float n;
    cout<<"enter the radius:";
    cin>>n;
    cout<<"the area is : "<<area_circle( n );
}