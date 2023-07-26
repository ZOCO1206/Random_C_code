#include <stdio.h>

#include <string.h>

#include <math.h> 

#include <stdlib.h>

int main() {

int t;

scanf("%d",&t);

while(t--)
{

int f,b,t,d,td=0;

scanf("%d %d %d %d", &f,&b,&t,&d);

while(b<d)

{
   td=td+b+f;

   d=d-(b-f);
}

td=td+d;

printf("%d\n", td*t);
}

return 0;
}