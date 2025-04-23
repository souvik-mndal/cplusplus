//WAP to check the sign of a number
#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter the number : ";
    cin>>number;
    if(number>0){
        cout<<"The number is positive number ";
    }
    else if(number<0){
        cout<<"The number is a negative number ";
    }
    else{
        cout<<"The number is 0";
    }
}