//WAP to find the area of a circle using fn
#include<bits/stdc++.h>
using namespace std;
float area( int n ){
    float ans = 3.1415*n*n;
    return ans;
}
int main(){
    int n;
    cout<<"Enter the radius of the circle : ";
    cin>>n;
    cout<<"the radius of the circle is : "<<area( n );
}