#include <stdio.h>
int main()
{
  long int n;
  int p,v,t;
  scanf("%ld",&n);
  long int ctr=0;
  while(n--)
  {
    scanf("%d %d %d",&p,&v,&t);
    if((p==1 && v==1) || (v==1 && t==1) || (p==1 && t==1) || (p==1 && v==1 && t==1))
    ctr++;
  }
  printf("%ld",ctr);
  return 0;
}
