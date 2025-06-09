#include<stdio.h>
#include<limits.h>
void main(){
    int arr[] = {3,2,5,4,1,7,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        int max=INT_MAX;
        int idx=-1;
        for(int j=i;j<n;j++){
            if(arr[j]<max){
                max=arr[j];
                idx=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[idx];
        arr[idx]=temp;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
}