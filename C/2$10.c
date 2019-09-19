#include <stdio.h>
#include <math.h>
int main()
{
  int T;
  long X;
  scanf("%d",&T);
  if(T>=1 && T<=1000)
  {
      while(T--)
      {
        scanf("%ld",&X);
        if(X%10==0 && X>=0 && X<=1000000000)
        {
          printf("0\n");
        }
        else if(X%5==0 && X%10!=0 && X>=0 && X<=1000000000)
        {
          printf("1\n");
        }
        else
        printf("-1\n");
      }
  }
  else
  return 0;
}
