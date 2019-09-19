#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n,i,a,b;
  scanf("%d",&n );
  int r[n];
  for(i=0;i<n;i++)
  {
    scanf("%d %d",&a,&b);
    r[i]=a%b;
  }
  for(i=0;i<n;i++)
  {
    printf("%d\n",r[i] );
  }
  return 0;
}
