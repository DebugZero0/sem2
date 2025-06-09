#include<stdio.h>
void merge(int arr[],int alen,int brr[],int blen,int crr[]){
    int i=0,j=0,k=0;
    while(i<alen && j<blen){
        if(arr[i]<=brr[j]) crr[k++]=arr[i++];
        else crr[k++]=brr[j++];
    }
    while(i<alen) crr[k++]=arr[i++] ;
    while(j<blen) crr[k++]=brr[j++] ; 
}
void mergesort(int arr[],int n){
    if(n==1) return;
    int a[n/2];
    int b[n-n/2];
    for(int i=0;i<n/2;i++){
        a[i]=arr[i];
    }
    for(int j=0;j<n-n/2;j++){
        b[j]=arr[j+n/2];
    }
    mergesort(a,n/2);
    mergesort(b,n-n/2);
    merge(a,n/2,b,n-n/2, arr);
}
void main(){
    int arr[] = {18,54,25,76};
    int n=sizeof(arr)/sizeof(int);
    mergesort(arr,n);
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    
}