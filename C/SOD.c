#include <stdio.h>
#include <stdlib.h>
int main()
{
  int y,i;
  int n;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++)
  {
    scanf("%d\n",&a[i]);
  }
  int b[n];
  for(i=0;i<n;i++)
  {
    int sum=0;
    while(a[i]!=0)
    {
      y=a[i]%10;
      sum=sum+y;
      a[i]=a[i]/10;
    }
    b[i]=sum;
  }
  for(i=0;i<n;i++)
  {
    printf("%d\n",b[i]);
  }
  return 0;
}
