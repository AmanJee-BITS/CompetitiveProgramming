#include <stdio.h>
#include <string.h>
int main()
{
  int t;
  scanf("%d",&t);
  while (t--)
   {
    int x;
    scanf("%d",&x);
    char a[x];
    int i;
    for (i=0;i<x;i++)
    {
      scanf(" %s",a);
    }
    for(i=0;i<x;i++)
    {
      if(a[i] == 'N')
      {
        printf("NOT SURE\n");
      }
      else if(a[i]== 'N' || a[i]== 'Y')
      {
        printf("NOT INDIAN\n");
      }
      else
      printf("INDIAN\n");
    }
   }
   return 0;
}
