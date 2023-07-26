#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 struct userinfo
 {
    char name[50];
    int age;
 };
 
 struct userdata
 {
    int number;
    struct userinfo a;
 }b;
 int main(){

    printf("Enter the password- ");
    scanf("%d",&b.number);
    if (b.number==1234)
    {
        printf("Enter the Name ");
        scanf("%s",b.a.name);
        printf("The user's name is %s\n",b.a.name);
        printf("enter the age ");
        scanf("%d",&b.a.age);
        printf("The user's age is %d",b.a.age);
    }
    else
    {
        printf("Incorrect password");
    }
    return 0;
 }