//Even number printing
//By Amayash Sinha (@ZOCO1206)
#include <stdio.h>

int main()
{
    int i,n;
    printf("All even numbers between 0-100 are -\n");
    for (i = 1; i <= 100; i++)
    {

        if (i % 2 == 0)

            printf("%d\n", i);
    }
    return 0;
}

