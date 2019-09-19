#include <stdio.h>
#include <string.h>
int main()
{
  char s[100000];
  int l,i,n,k,m;
  scanf("%s",s);
  scanf("%d",&n);
  l=strlen(s);
  char a[l];
  for(i=0;i<l;i++)
  {
    int k = s[i];
    if(k>=65 && (k<=90-n))
      k=k+n;
      if(k>=(90-n) && k<=90)
      {
        m=90-k;
        k=64+(n-m);
      }
      if(k>=97 && k<=(122-n))
      k=k+n;
      if(k>(122-n) && k<=122)
      {
        m=90-k;
        k=121+(n-m);
      }
      if (k>=48 && k<=(57-n))
        k=k+n;
        if(k>=(57-n) && k<=57)
        {
          m=57-k;
          k=47+(n-m);
        }
        a[i]=k;
  }
  for(i=0;i<l;i++)
  printf("%c",a[i]);
  return 0;
}
