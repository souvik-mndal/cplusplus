//WAP to solve the aggresive cow problem
#include<bits/stdc++.h>
using namespace std;
bool possible(int arr[],int n,int k ,int mid){
    int c=1;
    int pos=arr[0];
    for( int i=1;i<n ;i++){
        if(arr[i]-pos>=mid){
            c++;
            pos=arr[i];
        }
        if(c==k){
            return true;
        }
    }
    return false;
}
int solve( int arr[] , int n ,int k){
    int s=0;
    sort( arr,arr+n);
    int e=n-1;
    int ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if( possible(arr,n,k,mid)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;
}
int main(){
    int n, k;
    cout << "Enter the number of stalls: ";
    cin >> n;

    int arr[n];
    cout << "Enter the stall positions: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the number of cows: ";
    cin >> k;

    int result = solve(arr, n, k);
    cout << "The largest minimum distance is: " << result << endl;

    return 0;
}