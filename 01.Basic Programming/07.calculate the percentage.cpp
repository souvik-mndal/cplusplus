//WAP to find the percentage 
#include<iostream>
using namespace std;
int main(){
    int marks,total;
    cout<<"Enter the marks obtained : ";
    cin>>marks;
    cout<<"Enter the total marks : ";
    cin>>total;
    float percentage = ((float)marks/total);
    cout<<"The percentage is : "<<percentage*100<<"%";
}