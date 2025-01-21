//WAP to solve the eko-eko problem(SPOJ)
#include<bits/stdc++.h>
using namespace std;
bool possible(long long arr[],long long n,long long m ,long long mid){
    long long wood=0;
    for(int i=0 ; i<n ; i++){
        if( arr[i]>mid){
            wood+=arr[i]-mid;
        }
    }
    if(wood>=m){
        return true;
    }
    else{
        return false;
    }
}
long long maxht(long long arr[] , long long n ,long long m){
    long long s=0;
    long long e=*max_element(arr,arr+n);
    long long ans=-1;
    while(s<=e){
        long long mid=s+(e-s)/2;
        if(possible(arr,n,m,mid)){
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
    long long n, m;
    cout << "Enter the number of trees and required amount of wood: ";
    cin >> n >> m;

    long long arr[n];
    cout << "Enter the heights of the trees: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long result = maxht(arr, n, m);
    cout << "The maximum height to cut the trees is: " << result << endl;

    return 0;
}