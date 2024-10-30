//WAP to find the common in 3 sorted array 
// arr1 = 1 5 10 20 40 80
// arr2 = 6 7 20 80 100
// arr3 = 3 5 20 30 70 80 120
// ans = 20 80 
#include<bits/stdc++.h>
using namespace std;
vector<int> common( int arr1[] , int arr2[] , int arr3[] , int n1 , int n2 , int n3 ){
    vector<int>ans;
    set<int>st;
    int i=0 , j=0 , k=0 ;
    while( i<n1 && j<n2 && k<n3 ){
        if( arr1[i] == arr2[j] && arr2[j] == arr3[k] ){
            st.insert( arr1[i] );
            i++;j++;k++;
        }
        else if( arr1[i] < arr2[j] ){
            i++;
        }
        else if( arr2[j] < arr3[k] ){
            j++;
        }
        else{
            k++;
        }
    }
    for( auto it:st ){
        ans.push_back( it );
    }
    return ans;
}
int main(){
    int arr1[6] = {1,5,10,20,40,80};
    int arr2[5] = {6,7,20,80,100};
    int arr3[7] = {3,5,20,30,70,80,120};
    vector<int>ans = common( arr1 , arr2 , arr3 , 6,5,7);
    for( int i=0 ; i<ans.size() ; i++ ){
        cout<<ans[i]<<" ";
    }
}