#include<stdio.h>
struct  mc{
    char name[50];
    int age;
};
struct bc{
    int year;
    struct mc a;
} b;
int main(){
    printf("the name is ");
    scanf("%s",b.a.name);
    printf("the name is %s \n",b.a.name);
    printf("the year");
    scanf("%d",&b.year);
    printf("the year is %d",b.year);
return 0;
}
