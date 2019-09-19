#include <stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int a[n];
  int i;
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  int s;
  for(i=0;i<n;i++)
  {
    s = a[i] + a[i+3];
    printf("%d ",s);
  }
  return 0;
}
