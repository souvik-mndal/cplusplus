//WAP to print the hollow rectangle pattern
// * * * * *
// *       *
// * * * * *
#include<bits/stdc++.h>
using namespace std;
int main(){
    int rows , col;
    cout<<"Enter the number of rows and columns : ";
    cin>>rows>>col;
    for( int i=0 ; i<rows ; i++){
        for( int j=0 ; j<col ; j++){
            if( i==0 || j==0 || i==rows-1 || j==col-1 ){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}