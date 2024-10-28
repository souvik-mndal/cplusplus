//WAP to find the pivot index in the array
// 1 7 3 6 5 6
// ans = index 3 ( 1+7+3 == 5+6 )
#include<bits/stdc++.h>
using namespace std;
int pivot( vector<int>arr ){
    int n=arr.size();
    vector<int>lsum(n,0);
    vector<int>rsum(n,0);
    for( int i=1 ; i<n ; i++ ){
        lsum[i]=lsum[i-1]+arr[i-1];
    }
    for( int j=n-2 ; j>=0 ; j-- ){
        rsum[j] = rsum[j+1]+arr[j+1];
    }
    for( int k=0 ; k<n ; k++ ){
        if( lsum[k]==rsum[k]){
            return k;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the number of elements you want to take : ";
    cin>>n;
    vector<int>arr;
    for( int i=0 ; i<n ; i++ ){
        cout<<"Enter the element : ";
        int num;
        cin>>num;
        arr.push_back( num );
    }
    int ans = pivot( arr );
    cout<<"The pivot index in present at : "<<ans ;
}