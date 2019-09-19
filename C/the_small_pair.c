#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  long int t;
  scanf("%ld",&t);
  while(t--)
  {
    long int x;
    scanf("%ld",&x);
    int a[x],i;
    for(i=0;i<x;i++)
    {
      scanf("%d",&a[i]);
    }

    int min=99998;
    for(i=0;i<x;i++)
    {
      if(a[i]<min)
      {
        min=a[i];
      }
    }

    int min2=99999;
    for(i=0;i<x;i++)
    {
      if(a[i]>min && a[i]<min2)
      {
        min2=a[i];
      }
    }
    printf("%d\n",min+min2);
  }
  return 0;
}
