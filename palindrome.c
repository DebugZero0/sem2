#include<stdio.h>
void check(int x){
    int n=x,r=0;
    while(n!=0){
        r=r*10+n%10;
        n/=10;
    }
    if(r==x) printf("%d",x);
}
void main(){
    for(int i=100;i<=200;i++){
        check(i);
    }
}