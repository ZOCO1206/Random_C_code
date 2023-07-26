
#include<stdio.h>       
#include<math.h>
int main(){
    long int q,start,end,i;
    scanf("%ld",&q);
    while(q--)
    {
        int count=0,sum;
        scanf("%ld %ld",&start,&end);
        sum=(floor(sqrt(start)) - ceil(sqrt(end)) + 1);
        printf("%d \n",-sum); 
    }
    return 0;
}