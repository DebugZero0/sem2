#include<stdio.h>
void main(){
    int arr[] = {3,2,5,4,1,7,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++){
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    
}