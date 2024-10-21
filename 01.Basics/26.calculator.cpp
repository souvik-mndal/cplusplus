//WAP to make a calculator using switch case
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1 , num2;
    cout<<"Enter the two numbers :";
    cin>>num1>>num2;
    int op;
    cout<<"Enter which operation you want to make\npress 1 for addition\nPress 2 for substraction\nPress 3 for division\nPress 4 for multiplication : ";
    cin>>op;
    switch( op ){
        case 1:
        cout<<"the adddition is : "<<num1+num2;
        break;
        case 2:
        cout<<"the substraction is : "<<num1-num2;
        break;
        case 3:
        cout<<"the divison is : "<<num1/num2;
        break;
        case 4:
        cout<<"the multiplication is : "<<num1*num2;
        break;
        default:
        cout<<"Invalid value";
    }
}