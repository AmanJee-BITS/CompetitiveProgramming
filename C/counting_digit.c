#include<stdio.h>
int main()
{
  int x,ctr=0;
  scanf("%d",&x);
  while(x!=0)
  {
    x=x/10;
    ctr++;
  }
  printf("%d\n",ctr );
  return 0;
}
