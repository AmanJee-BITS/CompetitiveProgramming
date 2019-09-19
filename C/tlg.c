#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  int n,i,j,k;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++)
  {
    scanf("%d %d",&j,&k);
    a[i]=j-k;

  }
  int b[n];
  for(i=0;i<n;i++)
  {
    if(a[i]>0)
    {
      b[i]=a[i];
    }
    else
    {
      b[i]=a[i] * (-1);
    }
  }
  int max=-9999;
  for(i=0;i<n;i++)
  {
    if(b[i]>max)
    {
      max=b[i];
    }
  }
  for(i=0;i<n;i++)
  {
    if(a[i]/max == -1 && a[i]%max==0)
      {
        printf("2 %d",max);
      }
    else if(a[i]/max == 1 && a[i]%max==0)
    {
      printf("1 %d",max);
    }
    else
    continue;
  }
  return 0;
}
