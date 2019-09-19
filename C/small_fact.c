#include <stdio.h>
int main()
{
  int n,j,i;
  scanf("%d",&n);
  if(n<1 || n>100)
  {
    printf("ERROR");
  }
  else
  {
    int a[n];
    for(i=0;i<n;i++)
    {
      scanf("%d\n",&a[i]);
    }
        int b[n];
        for(i=0;i<n;i++)
        {
          int p=1;
          for(j=1;j<=a[i];j++)
          {
            p=p*j;
          }
          b[i]=p;
        }
    for(i=0;i<n;i++)
    {
      printf("%d\n",b[i]);
    }
  }
  return 0;

}
