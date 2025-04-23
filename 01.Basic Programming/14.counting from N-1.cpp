//WAP to print number from N to 1
//input:5 --> 5 4 3 2 1
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=n;i>=1;i--){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}