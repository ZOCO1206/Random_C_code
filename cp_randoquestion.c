#include<stdio.h>
#include<math.h>
int main(){
    long int q,start,end,sum=0,i;
    scanf("%ld",&q);
    while(q--)
    {
        int count=0;
        scanf("%ld %ld",&start,&end);
        for ( i = start; i <= end; i++)
        {
            sum=pow(i,0.5);
            if (sum==pow(i,0.5))
            count++;
        }

       printf("%d\n",count);
    }
    return 0;
}