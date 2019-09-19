#include <stdio.h>
#include <string.h>
int main()
{
  char a[1000];
  int i;
  gets(a);
  int len=0;
  len = strlen(a);
  int j,k=0;
  for(i=0;i<=len;i++)
  {
    for(j=i;j<=(i+5);j++)
    {
      if(a[j+1]==a[j+2])
      k++;
      else
      break;
    }
  }
  if(k>=5)
  printf("YES\n");
  else
  printf("NO\n");
  return 0;
}
