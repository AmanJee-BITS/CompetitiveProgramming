#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
  {
    int x,y,ctr=0;
    scanf("%d",&x);
    while (x!=0)
    {
      y=x%10;
      if(y == 4)
      {
        ctr++;
      }
      x=x/10;
    }
    printf("%d\n",ctr );
  }
  return 0;
}
