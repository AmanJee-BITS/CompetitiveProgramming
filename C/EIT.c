#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n,i,k;
  scanf("%d %d\n",&n,&k);
  int a[n];
  for(i=1;i<=n;i++)
  {
    scanf("%d\n",&a[i]);
  }
  int ctr=0;
  for(i=1;i<=n;i++)
  {
    if(a[i]%k==0)
    {
      ctr=ctr+1;
    }
  }
  printf("%d",ctr);
  return 0;
}
