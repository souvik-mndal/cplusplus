/*WAP to make a calculator using switch case*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    int a,b;
    cout<<"Enter the 2 numbers :";
    cin>>a>>b;
    cout<<"\nEnter 1 for add\nEnter 2 for substraction\nEnter 3 for multiply\nEnter 4 for division\n" ;
    cout<<"What operation you want to do : ";
    cin>>n;
    switch(n){
        case 1:cout<<"The addition is : "<<a+b;
        break;
        case 2:cout<<"The substraction is : "<<a-b;
        break;
        case 3:cout<<"The multliplication is : "<<a*b;
        break;
        case 4:cout<<"The division is : "<<a/b;
        break;
        default:cout<<"ERROR";
    }
}