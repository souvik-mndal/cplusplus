//its done when the search space is infintely big 
#include<iostream>
using namespace std;
int main(){
    int i=0,j=1;
    while(arr[j]<target){
        i=j;
        j=j*2;
    }
    int ans=bs(arr,i,j,target);
}