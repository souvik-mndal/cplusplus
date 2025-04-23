//WAP to print a number multiple times
//input:5 (5times) --> 5 5 5 5 5
#include<iostream>
using namespace std;    
int main(){
    int number,times;
    cout<<"Enter the number: ";
    cin>>number;
    cout<<"Enter the times: ";
    cin>>times;
    for(int i=1;i<=times;i++){
        cout<<number<<" ";
    }
    cout<<endl;
    return 0;
}