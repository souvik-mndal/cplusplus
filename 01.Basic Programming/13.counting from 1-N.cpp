//WAP to print numbers from 1 to N
//input:5 --> 1 2 3 4 5

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
