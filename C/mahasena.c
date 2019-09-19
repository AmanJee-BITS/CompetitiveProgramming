#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n;
  scanf("%d",&n);
  int a[n],i,o=0,e=0;
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
    if(a[i]%2==1)
    {o++;}
    else
    {e++;}
  }
  if(e>o)
  printf("READY FOR BATTLE\n");
  else
  printf("NOT READY\n");
  return 0;
}
