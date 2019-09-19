#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
    int x,fact=1;
    scanf("%d",&x);
    while(x!=0)
    {
      fact=fact *x;
      x--;
    }
    printf("%d\n",fact);
  }
  return 0;
}
