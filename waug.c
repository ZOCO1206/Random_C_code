#include <stdio.h>
int i;
int main()
{
    int markwaugh, stevewaugh, n;
    scanf("%d", &n);
    int arr[n + 1];
    arr[0] = 1;
    arr[1] = 1;
    arr[2] = 2;
    for (i = 3; i <= n; i++)
        arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
    stevewaugh = arr[n];
    for (i = 2; i <= n; i++)
        arr[i] = arr[i - 1] + arr[i - 2];
    markwaugh = arr[n];
    printf("Steve Waugh:%d\nMark Waugh:%d", stevewaugh, markwaugh);
    return 0;
}
