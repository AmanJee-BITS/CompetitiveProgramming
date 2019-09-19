#include <stdio.h>
#include <string.h>
int main()
{
  char a[100000];
  char b[100000];
  int l1=0, l2=0;
  int i,j,k=0;

  gets (a);
  gets (b);

  l1= strlen(a);
  l2= strlen(b);
  if(l1==l2)
  {
    for(i=0;i<l1;i++)
    {
      for(j=0;j<l2;j++)

        if (a[i]== b[j])
        k++;
        else
        k=k;

    }
    if(k==l1 || k>l1)
    printf("YES\n");
    else
    printf("NO\n");
  }
  else
  printf("NO\n");
  return 0;
}
