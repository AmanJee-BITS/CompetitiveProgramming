#include <stdio.h>
int main()
{
  int n,q;
  scanf("%d %d\n",&n,&q);
  int a[n];
  int i,j,l,r,p=0;
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  while(q--)
  {
    scanf("%d %d",&l,&r);
    for(i=0;i<n;i++)
    {
      if(a[i]==l && a[i]<=r)
      p=p+a[i];
    }

    printf("%d\n",p);
  }

  return 0;
}
