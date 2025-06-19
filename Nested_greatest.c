#include<stdio.h>
void main(){
    int a,b,c,max,min;
    printf("Enter three nos:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        if(a>c) max=a;
        else max=c;
    }
    else if(b>c){
        if(b>a) max=b;
        else max=a;
    }
    printf("Max:\t%d",max);
}