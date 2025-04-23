//WAP to find the sum of N numbers
//input:5 --> 1+2+3+4+5=15  
#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        sum+=i; //sum=sum+i
    }
    cout<<"The sum of first "<<n<<" numbers is: "<<sum<<endl;
    return 0;
}