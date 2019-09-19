#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n,i,j,k,s=0;
  scanf("%d",&n);
  int b[n];
  for(i=0;i<n;i++)
  {
    scanf("%d %d",&j,&k);
    s=j+k;
    b[i]=s;
  }
  for(i=0;i<n;i++)
  {
    printf("%d\n",b[i]);
  }
  return 0;
}
