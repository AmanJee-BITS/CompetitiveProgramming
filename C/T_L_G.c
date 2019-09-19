#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  int n,i,j,k;
  scanf("%d",&n);
  int A[n],B[n],C[n],D[n];
  int a=0,b=0;
  for(i=0;i<n;i++)
  {

    scanf("%d %d",&j,&k);
    a =a+j;
    b =b+k;
    A[i]=a;
    B[i]=b;
  }
  int max=-99999;
  int al=0,bl=0;
  for(i=0;i<n;i++)
  {
    if(A[i]>B[i])
    {
      C[i] = A[i]-B[i];
    }
    else
    {
      C[i] = B[i]-A[i];
    }
    if(C[i]>max)
    {
      max=C[i];
    }
    else
    {
      max =max;
    }
    D[i]=A[i]-B[i];
    if(D[i]>0)
    {
      al=al+D[i];
    }
    else
    {
      bl=bl+D[i];
    }
  }
  if(al>bl)
  printf("1 %d",max );
  else
  printf("2 %d",max );
  return 0;
}
