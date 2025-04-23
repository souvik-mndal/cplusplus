//WAP to check what day it is
//input:1   -->     weekday
//input:6   -->     weekend
#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter the number between (1 - 7): ";
    cin>>number;
    if(number>0 && number<6){
        cout<<"Its a weekday ";
    }
    else{
        cout<<"Its weekend";
    }
}