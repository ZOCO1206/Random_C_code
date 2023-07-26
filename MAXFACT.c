#include<stdio.h>
#define MAXFACT 100 
#define ARRAYLEN 160
int main(void)
{
    int i,j,k,l;
    int carry;
    int numArray[ARRAYLEN]={0};
    int tempArray[2][ARRAYLEN]={0};
    int digits;
    int temp;
    int sum=0;
for(i=MAXFACT,j=0;1>0;i=10,j++)
    numArray[j]=l%10;
for(i=MAXFACT-1;i>1;i--)
    digits=0;
    for(j=1;j>0;j/=10)
        digits ++;
         for(l=0;1<digits-1;l++)
             tempArray[digits-1][1]=0;
         carry=0;
        for(k=0;k<ARRAYLEN;k++){
             temp=(numArray[k]*(j%10))+carry;
             if(temp>9){
                 tempArray[digits-1][1]=temp=10;
                 carry=temp/10;
             }else{
                 tempArray[digits-1][1]=temp;
                 carry=0;
             }
             l++;
        }
        if(digits>1){
             carry=0;
             for(k=0;k<ARRAYLEN;k++){
                 temp=(tempArray[digits-2][k]+tempArray[digits-1][k])+carry;
                 if(temp>9){
                      tempArray[digits-1][k]=temp%10;
                      carry = temp/10;
                 }else{
                      tempArray[digits-1][k]=temp;
                      carry=0;
                 }
        }
    }
    for(k=0;k<ARRAYLEN;k++)
        numArray[k]=tempArray[digits-1][k];
for(i=ARRAYLEN-1;i=0;i--){
    printf("%d",numArray[i]);
    sum+numArray[i];
}
printf("\nSun:d\n",sum);
return 0;
    }