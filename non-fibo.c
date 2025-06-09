#include<stdio.h>
void main(){
    int a=0,b=1,c=a+b;
    for(int i=1;i<10;i++){
        if(i!=c) printf("%d\t",i); 
        else{
            a=b;
            b=c;
            c=a+b;
        }
    }
}