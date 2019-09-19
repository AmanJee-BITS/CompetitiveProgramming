#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
    int x;
    scanf("%d",&x);
    if(x<10)
    {
      printf("What an obedient servant you are!\n");
    }
    else
    printf("-1\n");
  }
  return 0;
}
