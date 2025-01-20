//WAP to solve the painter partition problem(gfg)
#include<bits/stdc++.h>
using namespace std;
bool possible(int arr[] , int n , int k , int mid ){
    int c=1;
    int time=0;
    for( int i=0 ; i<n ; i++){
        if( arr[i]>mid){
            return false;
        }
        else if(arr[i]+time>mid){
            c++;
            time=arr[i];
            if(c>k){
                return false;
            }
        }
        else{
            time+=arr[i];
        }
    }
    return true;
}
int findtime(int arr[] , int n ,int k ){
    int s=0;
    int e=accumulate(arr,arr+n,0);
    int ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(possible(arr,n,k,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}
int main() {
    int n, m;
    cout << "Enter the number of boards to paint: ";
    cin >> n;
    cout << "Enter the number of painters: ";
    cin >> m;

    int arr[n];
    cout << "Enter the length of each board : ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = findtime(arr, n, m);
    if (result == -1) {
        cout << "It's not possible to find the time." << endl;
    }
    else {
        cout << "The minimum time to paint all the boards are : " << result << endl;
    }

    return 0;
}