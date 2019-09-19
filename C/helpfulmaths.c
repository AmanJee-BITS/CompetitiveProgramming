#include<stdio.h>
#include<string.h>
int main()
{
  char a[100];
  gets (a);
  int l,o=0,t=0,th=0,p=0;
  l = strlen (a);
  char b[l],i;
  for(i=0;i<l;i++)
  {
    if(a[i]=='1')
    o++;
    else if(a[i]=='2')
    t++;
    else if(a[i]=='3')
    th++;
    else if(a[i]=='+')
    p++;
  }
  for(i=0;i<(o+1);i=i+2)
  {
    b[i]=49;
  }
  for(i=(o+2);i<(o+t+2);i=i+2)
  {
    b[i]=50;
  }
  for(i=(o+t+3);i<(o+t+th+3);i=i+2)
  {
    b[i]=51;
  }
  for(i=1;i<l;i=i+2)
  {
    b[i]='+';
  }
  printf("%s",b);
  return 0;
}
