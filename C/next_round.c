#include <stdio.h>
int main()
{
  int n,k;
  scanf("%d %d",&n,&k);
  int a[n],i,ctr=0;

  if(n>=k)
  {
    for(i=1;i<=n;i++)
    {
      scanf("%d",&a[i]);
    }

    for(i=1;i<=n;i++)
    {
      if(a[i]>=a[k] && a[i]>0)
      ctr++;

    }
    printf("%d\n",ctr);
  }
  return 0;
}
