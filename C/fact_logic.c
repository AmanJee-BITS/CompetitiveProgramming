#include <stdio.h>
int main()
{
  int i,n,j=1;
  scanf("%d",&n);
  while(n!=0)
  {
    j=j*n;
    n--;
  }
  printf("%d",j);
  return 0;
}
