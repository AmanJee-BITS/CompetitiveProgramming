#include <stdio.h>
#include <string.h>
int main()
{
  char a[101];
  gets(a);
  int i,k;
  int len = strlen(a);
  for(i=0;i<len;i++)
  {
    if(a[i]==a[len-1-i])
    k++;
    else
    k=0;
  }
  if(k>1)
  printf("YES");
  else
  printf("NO");
  return 0;
}
