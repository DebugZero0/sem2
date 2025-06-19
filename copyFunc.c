#include<stdio.h>
int length(char str[]){
    int c=0,i=0;
    char ch=str[0];
    while (ch!='\0')
    {
        c++;
        ch=str[++i];
    }
    return c;
}
void deepCopy(char str1[],char str2[]){
    int n=length(str1); // strlen
    for(int i=0;i<n;i++){
        str2[i]=str1[i];
    }
    printf("copied text:");
    for(int i=0;i<n;i++){
        printf("%c",str2[i]);
    }
    
}
void main(){
    char str1[20],str2[20];
    printf("enter text:");
    scanf("%[^\n]",str1);
    deepCopy(str1,str2); //strcpy

}