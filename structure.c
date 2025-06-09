#include <stdio.h>
#include<string.h>
struct student{
    int roll;
    double marks;
    char name[20];
}a,b,c;

void main(){
    a.roll=10;
    a.marks=98.6;
    strcpy(a.name, "Ankan");

    b.roll=25;
    b.marks=92.6;
    strcpy(b.name, "rupam");

    c.roll=12;
    c.marks=75.6;
    strcpy(c.name, "avik");

    struct student arr[3];
    arr[0]=a,arr[1]=b,arr[2]=c;

    for(int i=0;i<3;i++){
        printf("%s\t%d\t%.2lf\n",arr[i].name,arr[i].roll,arr[i].marks);
    }

    // pointers
    struct student *ptr;
    for (int i = 0; i < 3; i++)
    {
        ptr=&arr[i];
        printf("%s\t",ptr->name);
    }
    int a=2;
    printf("%d %d %d",a++,a++,a++);
    


}