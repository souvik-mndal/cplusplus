//its used when the search space is very big and the target is present near the starting of the array
#include<iostream>
using namespace std;
int main(){
    int i=1,j=n-1;
    if(arr[0]==target){
        return 0;
    }
    while(i<=j && arr[i]<target){
        i*=2;
    }
    int ans=bs(arr,i/2,min(i,n-1,target));
}