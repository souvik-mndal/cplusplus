//WAP to print the even numbers from 1 to N
//input:5 --> 2 4
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}