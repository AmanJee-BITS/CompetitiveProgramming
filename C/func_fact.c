#include<stdio.h>
int fact(int a,int b);
int main()
{
  int a,b;
  scanf("%d",&a);
  printf("%d",fact(a,b));
  return 0;
}

int fact(a,b)
{
  b=1;
  while(a!=0)
  {
    b=b*a;
    a--;
  }
  return b;
}
