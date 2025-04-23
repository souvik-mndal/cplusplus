//WAP to check the voting eligiblity
#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age : ";
    cin>>age;
    if(age>=18){
        cout<<"You are eligible to vote ";
    }
    else{
        cout<<"you are not eligible to vote";
    }
}