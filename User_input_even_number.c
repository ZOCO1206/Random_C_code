//Even number printing
//By Amayash Sinha (@ZOCO1206)
#include <stdio.h>

int main()
{
    int i,n,x;
    printf("Enter the number to find even numbers between them\nFrom:");
    scanf("%d",&n);
    printf("to:");
    scanf("%d",&x);
    printf("All even numbers between the given numbers are -\n");
    for (i = n; i <= x; i++)
    {

        if (i % 2 == 0)

            printf("%d\n", i);
    }
    return 0;
}
