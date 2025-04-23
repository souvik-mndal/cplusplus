//WAP to check what month it is
//input:1   -->     January
//input:6   -->     June
#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter the number between (1 - 12): ";
    cin>>number;
    if(number==1){
        cout<<"Its January";
    }
    else if(number==2){
        cout<<"Its February";
    }
    else if(number==3){
        cout<<"Its March";
    }
    else if(number==4){
        cout<<"Its April";
    }
    else if(number==5){
        cout<<"Its May";
    }
    else if(number==6){
        cout<<"Its June";
    }
    else if(number==7){
        cout<<"Its July";
    }
    else if(number==8){
        cout<<"Its August"; 
    }
    else if(number==9){
        cout<<"Its September";
    }
    else if(number==10){
        cout<<"Its October";
    }
    else if(number==11){
        cout<<"Its November";
    }
    else{
        cout<<"Its December";
    }
}