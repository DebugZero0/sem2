#include<stdio.h>
void main(){
    int a=0,b=1,c;
    for(int i=0;i<10;i++){
        if(i<=1) printf("%d\t",i);
        else{
            c=a+b;
            a=b;
            b=c;
            printf("%d\t",c);
        } 
    }
}