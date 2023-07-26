#include<stdio.h>

int main(){
    int i, num,sum=0,r;
    scanf("%d",&num);
     for ( i = num; num!=0; num=num/10)
     {
        r= num %10;
        sum= sum + (r*r*r);
     }
     if (sum==i)
     printf("%d is armstrong",i);
     else
     printf("it is not armstrong");
     return 0;
}