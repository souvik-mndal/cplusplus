//its done when the search space is infintely big 
int i=0,j=1;
while(arr[j]<target){
    i=j;
    j=j*2;
}
int ans=bs(arr,i,j,target);