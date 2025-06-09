#include <stdio.h>
void swap(int arr[],int i,int j){
    int temp=arr[i]; 
    arr[i]=arr[j];
    arr[j]=temp;
}
int partition(int arr[], int low, int high){
    int pivot=arr[low], pidx=low,c=0;
    for(int i=low+1;i<=high;i++){
        if(arr[i]<=pivot){
            c++;
        }
    }
    int cidx=low+c;
    swap(arr,pidx,cidx);
    int i=low,j=high;
    while(i<cidx && j>cidx) {
			if(arr[i]<=pivot) i++;
			else if(arr[j]>pivot) j--;
			else if(arr[i]>pivot && arr[j]<=pivot) {
				swap(arr,i,j); 
			}
	}
    return cidx;
    
}
void quicksort(int arr[], int low, int high){
    if(low>=high) return;
    int idx=partition(arr, low, high);
    quicksort(arr, low, idx-1);
    quicksort(arr, idx+1, high);
}
int main(){
    int arr[]={10, 7, 8, 9, 1, 5};
    int n=sizeof(arr)/sizeof(arr[0]);
    quicksort(arr, 0, n-1);
    printf("Sorted array:\t");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}