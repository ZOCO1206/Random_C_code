#include<stdio.h>
int main(){
    int T;
    int i,j;
    scanf("%d",&T);
    while (T--)
    {
        int count=0;
        int matprob[100];
        int N;
        scanf("%d",&N);
        for ( i = 0; i < N; i++)
        {
            scanf("%d",&matprob[i]);
        }
        for ( i = 0; i < N; i++)
        {
            int sum=0,prod=1;
            for ( j = i; j < N; j++)
            {
                sum=sum+matprob[j];
                prod=prod*matprob[j];
                if (sum==prod)
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0; 
}