/*WAP to take input in an array and print the twice of it
i/p-> 1 2 3 4 5 
o/p-> 2 4 6 8 10
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the limit: ";
    cin>>n;
    int arr[n];
    for( int i=0 ; i<n ; i++){
        cout<<"enter the input element for index "<<i<<": "<<endl;
        cin>>arr[i];
    }
    for( int i=0 ; i<n ; i++){
        cout<<2*arr[i]<<" ";
    }
}