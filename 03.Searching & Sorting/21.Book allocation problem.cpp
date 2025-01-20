#include<bits/stdc++.h>
using namespace std;
bool possible(int arr[] , int n , int m , int mid ){
    int c=1;
    int pages=0;
    for( int i=0 ; i<n ; i++){
        if( arr[i]>mid){
            return false;
        }
        else if(arr[i]+pages>mid){
            c++;
            pages=arr[i];
            if(c>m){
                return false;
            }
        }
        else{
            pages+=arr[i];
        }
    }
    return true;
}
int findpages(int arr[] , int n ,int m ){
    if(m>n){
        return -1;
    }
    int s=0;
    int e=accumulate(arr,arr+n,0);
    int ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(possible(arr,n,m,mid)){
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
    cout << "Enter the number of books: ";
    cin >> n;
    cout << "Enter the number of students: ";
    cin >> m;

    int arr[n];
    cout << "Enter the pages of each book: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = findpages(arr, n, m);
    if (result == -1) {
        cout << "It's not possible to allocate books to students." << endl;
    }
    else {
        cout << "The minimum pages a student has to read is: " << result << endl;
    }

    return 0;
}