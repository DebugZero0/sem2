#include<stdio.h>
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
void main(){
    int a=10,b=20;
    printf("%d\t%d\n",a,b);
    swap(&a,&b);
    printf("%d\t%d\n",a,b);
}