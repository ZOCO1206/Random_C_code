#include <stdio.h>

int main()
{
  int day;
  int i;

  scanf("%d", &day);
  for (i > 0; i <= 7; i++)
  {
    switch (day)
    {
    case 6:
      printf("Today is Saturday\n");
      break;
    case 7:
      printf("Today is Sunday\n");
      break;
    default:
      printf("Looking forward to the Weekend\n");
      break;
    }
    break;
  }
  return 0;
}