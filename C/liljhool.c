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
      if(a[j]==a[j+1])
      k++;
      else
      break;
    }
  }
  if(k>=4)
  printf("Sorry,sorry!\n");
  else
  printf("Good luck!\n");
  return 0;
}
